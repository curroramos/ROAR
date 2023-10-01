#include "cpp_arduino_comm_usb/arduino_communicator_node.hpp"

namespace roar {
    namespace arduino {
        
        // Constructor
        ArduinoCommunicatorNode::ArduinoCommunicatorNode() : Node("arduino_communicator_node"){

            // Declare ROS parameters for IP address, port, and timings
            this->declare_parameter("ip_address", "10.0.0.9");
            this->declare_parameter("port", 1883);
            this->declare_parameter("get_state_period", 0.1);
            this->declare_parameter("write_action_period", 0.1);
            this->declare_parameter("write_timeout", 0.1);
            this->declare_parameter("vehicle_status_header", "base_link");

            // Retrieve parameters and create timers based on them
            double get_state_period = this->get_parameter("get_state_period").as_double();
            this->read_timer_ = this->create_wall_timer(
                std::chrono::duration<double>(get_state_period),
                std::bind(&ArduinoCommunicatorNode::on_read_timer, this)
            );

            double write_action_period = this->get_parameter("write_action_period").as_double();
            this->write_timer_ = this->create_wall_timer(
                std::chrono::duration<double>(write_action_period),
                std::bind(&ArduinoCommunicatorNode::on_write_timer, this)
            );

            // Create subscription and publisher
            command_subscriber_ = this->create_subscription<roar_gokart_msgs::msg::EgoVehicleControl>(
                "ego_vehicle_control",
                10,
                std::bind(&ArduinoCommunicatorNode::on_command, this, std::placeholders::_1)
            );
            state_publisher_ = this->create_publisher<roar_gokart_msgs::msg::VehicleStatus>(
                "vehicle_status",
                10
            );

            // initialize latest state and latest command
            latest_state_ = std::make_shared<roar_gokart_msgs::msg::VehicleStatus>();
            latest_command_ = std::make_shared<roar_gokart_msgs::msg::EgoVehicleControl>();

            // Set up the UDP socket
            sock = socket(AF_INET, SOCK_DGRAM, 0);
            if (sock < 0) {
                perror("socket creation failed");
                exit(EXIT_FAILURE);
            }

            arduino_ip.s_addr = inet_addr("10.0.0.9");
            server_address.sin_family = AF_INET;
            server_address.sin_addr = arduino_ip;
            server_address.sin_port = htons(arduino_port);

            // Initialize logger
            printf("Initialize logger and set level\n");
            // _logger = rclcpp::get_logger("arduino_communicator_node");
            // set level of logger
            // _logger.set_level(rclcpp::logging::LogLevel::Debug);
            // Log message
            // RCLCPP_INFO(_logger, "ArduinoCommunicatorNode has been initialized");
        }
        ArduinoCommunicatorNode::~ArduinoCommunicatorNode()
        {
            // Close socket
            close(sock);
            printf("Destroy node\n");
        }


        // Function to get state data from Arduino
        void ArduinoCommunicatorNode::on_read_timer() {
            // Send message to IP address and port
            auto ip_address = this->get_parameter("ip_address").as_string();
            auto port = this->get_parameter("port").as_int();

            // Send message via UDP
            std::string message = "s";
            int bytes_sent = sendto(sock, message.c_str(), message.size(), 0, (struct sockaddr*)&server_address, sizeof(server_address));
            if (bytes_sent < 0) {
            perror("sendto failed");
            exit(EXIT_FAILURE);
            }
            // printf("Sent message: %s\n", message.c_str());
            
    
            // Receive data from socket with a buffer size of 1024 bytes
            std::array<char, 1024> buffer;
            // printf("Wait for data from socket\n");


            // Receive data from socket with a buffer size of 1024 bytes
            struct sockaddr_in client_address;
            socklen_t client_address_len = sizeof(client_address);
            ssize_t num_bytes_received = recvfrom(ArduinoCommunicatorNode::sock, buffer.data(), buffer.size(), 0, (struct sockaddr*)&client_address, &client_address_len);
            if (num_bytes_received < 0) {
                perror("recvfrom failed");
                exit(EXIT_FAILURE); // TODO: don't exit
            }

            // Print the received message
            printf("Received message: %s\n", buffer.data());    


            try {
                // Convert received data to string
                auto data = std::string(buffer.data());

                // Parse JSON data to vehicle state model
                auto model = p_dataToVehicleState(data);

                // Update latest state
                *latest_state_ = model;
                // printf("Update latest state\n");

                // Log received message
                // RCLCPP_DEBUG(_logger, "Received: %s", latest_state.to_string().c_str());
            } catch (const std::exception& e) {
                // Log error
                // RCLCPP_ERROR(_logger, "Failed to parse received data: %s", e.what());
            }
        }

        // Callback function for sending control commands to Arduino
        void ArduinoCommunicatorNode::on_write_timer() {
            std::string message;

            // Create a RapidJSON document
            rapidjson::Document doc;
            doc.SetObject();

            

            message = latest_command_->to_json->to_string();

            // send message via UDP
            int bytes_sent = sendto(sock, message.c_str(), message.size(), 0, (struct sockaddr*)&server_address, sizeof(server_address));

            // TO - DO
            // checkear que el codigo de python trabaja bien 
            // filtrar mensajes, cuidado con la concurrencia ??  
            // montar bien el codigo igual que el arduino_comm en python


        }

        // Callback function for receiving EgoVehicleControl commands from ROS
        void ArduinoCommunicatorNode::on_command(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg) {
            // Save the received EgoVehicleControl message in latest_command_            
            // printf("Save the received EgoVehicleControl message in latest_command_\n");

            auto command = roar_gokart_msgs::msg::EgoVehicleControl();
            command = p_egoVehicleControlMsgToArduinoCmdActionModel(msg);

            // update latest command
            *latest_command_ = command;
            
            // Log received message
            // RCLCPP_DEBUG(_logger, "Received: %s", latest_control_model.to_string().c_str());
        }



        void ArduinoCommunicatorNode::on_publish_state() {
            // Create header for the message
            std_msgs::msg::Header header;
            header.stamp = this->now();
            header.frame_id = this->get_parameter("vehicle_status_header").as_string();

            // Create actuation for the message
            roar_gokart_msgs::msg::Actuation act;
            act.brake = latest_command_->brake;
            act.reverse = latest_command_->reverse;
            act.steering = latest_command_->steering_angle;
            act.throttle = latest_command_->target_speed;

            // Create vehicle status message
            roar_gokart_msgs::msg::VehicleStatus msg;
            msg.header = header;
            msg.actuation = act;
            msg.angle = latest_state_->angle;
            msg.speed = latest_state_->speed;
            msg.is_left_limiter_on = latest_state_->is_left_limiter_on;
            msg.is_right_limiter_on = latest_state_->is_right_limiter_on;
            msg.target_speed = latest_state_->target_speed; 
            msg.target_steering_angle = latest_state_->target_steering_angle; 

            // Publish the vehicle status message
            state_publisher_->publish(msg);
        }

        // Save the EgoVehicleControl message (pointer) in model -- HELP, is that right?
        roar_gokart_msgs::msg::EgoVehicleControl ArduinoCommunicatorNode::p_egoVehicleControlMsgToArduinoCmdActionModel(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg) {
            // Create a new ArduinoEgoVehicleControlMsg model
            roar_gokart_msgs::msg::EgoVehicleControl model;
            // Clip the brake value to ensure it's within the valid range [0, 1]
            model.brake = std::clamp(msg->brake, 0.0f, 1.0f);
            // Copy the reverse, steering angle, and target speed from the received message
            model.reverse = msg->reverse;
            model.steering_angle = msg->steering_angle;
            model.target_speed = msg->target_speed;

            // Return the converted model
            return model;
        }


        roar_gokart_msgs::msg::VehicleStatus ArduinoCommunicatorNode::p_dataToVehicleState(const std::string& jsonData) { // const nlohmann::json& data as input
            roar_gokart_msgs::msg::VehicleStatus model;
            // Parse JSON data to vehicle state model
            // printf("Parse JSON data to vehicle state model\n");

            // Parse the received JSON message
            rapidjson::Document document;
            document.Parse(jsonData.c_str());

            try {
                // Check if the received JSON message is an object
                if (!document.IsObject()) {
                    // printf("JSON data is not an object\n");
                    throw std::runtime_error("JSON data is not an object.");
                }
                
                // Parse individual fields and populate the model
                model.is_auto = document["is_auto"].GetBool();
                model.is_left_limiter_on = document["is_left_limiter_ON"].GetBool();
                model.is_right_limiter_on = document["is_right_limiter_ON"].GetBool();
                model.angle = document["angle"].GetDouble();
                // model.angular_velocity = document["angular_velocity"].GetDouble();
                model.speed = document["speed"].GetDouble();
                model.target_speed = document["target_speed"].GetDouble();
                model.target_steering_angle = document["target_steering_angle"].GetDouble();

                const rapidjson::Value& currentActuation = document["current_actuation"];
                model.actuation.throttle = currentActuation["throttle"].GetInt();
                model.actuation.steering = currentActuation["steering"].GetDouble();
                model.actuation.brake = currentActuation["brake"].GetInt();
                model.actuation.reverse = currentActuation["reverse"].GetBool();

                // Print all values 
                printf("is_auto: %d\n", model.is_auto);
                printf("is_left_limiter_on: %d\n", model.is_left_limiter_on);
                printf("is_right_limiter_on: %d\n", model.is_right_limiter_on);
                printf("angle: %f\n", model.angle);
                printf("speed: %f\n", model.speed);
                printf("target_speed: %f\n", model.target_speed);
                printf("target_steering_angle: %f\n", model.target_steering_angle);
                printf("throttle: %d\n", model.actuation.throttle);
                printf("steering: %f\n", model.actuation.steering);
                printf("brake: %d\n", model.actuation.brake);
                printf("reverse: %d\n", model.actuation.reverse);

            } catch (const std::exception& e) {
                // Handle any exceptions that may occur during parsing.
                // You can log an error message or throw an exception as needed.
                // For example:
                //throw std::runtime_error("Failed to parse JSON: " + std::string(e.what()));

                // print
                // printf("Failed to parse JSON: %s\n", e.what());
            }

            return model;
        }

        // Callback function for publishing the current state
        void ArduinoCommunicatorNode::p_publish_state(const roar_gokart_msgs::msg::VehicleStatus::SharedPtr latest_state_ ) {
            // Create Header
            std_msgs::msg::Header header;
            header.stamp = rclcpp::Clock().now(); // Assuming you are using ROS 2 rclcpp
            header.frame_id = this->get_parameter("vehicle_status_header").as_string();

            // Create Actuation
            roar_gokart_msgs::msg::Actuation act;
            act.throttle = latest_state_->actuation.throttle;
            act.steering = latest_state_->actuation.steering;
            act.brake = latest_state_->actuation.brake;
            act.reverse = latest_state_->actuation.reverse;

            // Create VehicleStatus message
            roar_gokart_msgs::msg::VehicleStatus msg;
            msg.header = header;
            msg.angle = latest_state_->angle;
            msg.is_auto = latest_state_->is_auto;
            msg.is_left_limiter_on = latest_state_->is_left_limiter_on;
            msg.is_right_limiter_on = latest_state_->is_right_limiter_on;
            msg.speed = latest_state_->speed;
            msg.target_speed = latest_state_->target_speed;
            msg.target_steering_angle = latest_state_->target_steering_angle;
            msg.actuation = act;

            // Publish the message
            this->state_publisher_->publish(msg);

        }

        
        // Get IP address and port from parameters
        std::pair<std::string, int> ArduinoCommunicatorNode::p_getIPAndPort() {
            auto ip_address = this->get_parameter("ip_address").as_string();
            auto port = this->get_parameter("port").as_int();

            return std::make_pair(ip_address, port);
        }

    }  // namespace arduino
}  // namespace roar


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<roar::arduino::ArduinoCommunicatorNode>());
  rclcpp::shutdown();
  return 0;
}
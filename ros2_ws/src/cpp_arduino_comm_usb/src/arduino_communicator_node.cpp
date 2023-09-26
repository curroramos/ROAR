#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_arduino_comm_usb/arduino_communicator_node.hpp"

#include "roar_gokart_msgs/msg/actuation.hpp"
#include "roar_gokart_msgs/msg/vehicle_status.hpp"
#include "roar_gokart_msgs/msg/ego_vehicle_control.hpp"

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

            // doubt: what is this for??
            publish_state_timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&ArduinoCommunicatorNode::on_publish_state, this));    


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

            // Initialize socket connection PHASE II
            printf("Initialize socket connection\n");
            //int sock = socket(AF_INET, SOCK_DGRAM, 0);


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
            // Destructor   
            printf("Destroy node\n");
        }


        // Function to get state data from Arduino
        void ArduinoCommunicatorNode::on_read_timer() {
            // Send message to IP address and port
            auto message = std::string("s");
            auto ip_address = this->get_parameter("ip_address").as_string();
            auto port = this->get_parameter("port").as_int();
            printf("Send message to IP address and port\n");


            // Receive data from socket with a buffer size of 1024 bytes
            std::array<char, 1024> buffer;
            printf("Wait for data from socket\n");

            try {
                // Convert received data to string
                auto data = std::string(buffer.data());

                // Parse JSON data to vehicle state model
                // auto model = p_dataToVehicleState(data);
                printf("Parse JSON data to vehicle state model\n");

                // Update latest state
                // latest_state_ = model;
                printf("Update latest state\n");

                // Log received message
                // RCLCPP_DEBUG(_logger, "Received: %s", latest_state.to_string().c_str());
            } catch (const std::exception& e) {
                // Log error
                // RCLCPP_ERROR(_logger, "Failed to parse received data: %s", e.what());
            }
        }

        // Callback function for sending control commands to Arduino
        void ArduinoCommunicatorNode::on_write_timer() {
            // Serialize the latest control model to JSON and encode it as UTF-8
            printf("Serialize the latest control model to JSON and encode it as UTF-8\n");
            
            // Log a debug message indicating that the message has been written
            // RCLCPP_DEBUG(_logger, "Sent: %s", latest_command.to_string().c_str());
            
            // Send the message to the specified IP address and port
            auto ip_address = this->get_parameter("ip_address").as_string();
            auto port = this->get_parameter("port").as_int();
            printf("Send the message to the specified IP address and port\n");
            
        }

        // Callback function for receiving EgoVehicleControl commands from ROS
        void ArduinoCommunicatorNode::on_command(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg) {
            // Save the received EgoVehicleControl message in latest_command_            
            printf("Save the received EgoVehicleControl message in latest_command_\n");

            //auto command = roar_gokart_msgs::msg::EgoVehicleControl();
            //command = p_egoVehicleControlMsgToArduinoCmdActionModel(msg);

            // update latest command
            // latest_command_ = command;
            
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


        roar_gokart_msgs::msg::VehicleStatus ArduinoCommunicatorNode::p_dataToVehicleState() { // const nlohmann::json& data as input
            roar_gokart_msgs::msg::VehicleStatus model;
            // Parse JSON data to vehicle state model
            // roar_gokart_msgs::msg::VehicleStatus model = //data.get<ArduinoVehicleStateModel>();
            printf("Parse JSON data to vehicle state model\n");

            return model;
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
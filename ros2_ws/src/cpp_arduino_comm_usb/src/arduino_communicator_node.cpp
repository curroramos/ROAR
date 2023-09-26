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
        ArduinoCommunicatorNode::ArduinoCommunicatorNode() : Node("arduino_communicator_node"), count_(0) {
            // Create a publisher to publish roar_gokart_msgs::msg::VehicleStatus messages on the 'arduino_topic' topic.
            state_publisher_ = this->create_publisher<roar_gokart_msgs::msg::VehicleStatus>("arduino_topic", 10);

            // Create a timer with a callback function.
            publish_state_timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&ArduinoCommunicatorNode::on_publish_state, this));    

            // declare parameters
            this->declare_parameter("ip_address", "10.0.0.9");
            this->declare_parameter("port", 1883);
            this->declare_parameter("get_state_period", 0.1);
            this->declare_parameter("write_action_period", 0.1);
            this->declare_parameter("write_timeout", 0.1);
            this->declare_parameter("vehicle_status_header", "base_link");

            // Timers
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

            // Subscriber
            command_subscriber_ = this->create_subscription<roar_gokart_msgs::msg::EgoVehicleControl>(
                "ego_vehicle_control",
                10,
                std::bind(&ArduinoCommunicatorNode::on_command, this, std::placeholders::_1)
            );

            // Publisher
            state_publisher_ = this->create_publisher<roar_gokart_msgs::msg::VehicleStatus>(
                "vehicle_status",
                10
            );

            // initialize latest state
            latest_state_ = std::make_shared<roar_gokart_msgs::msg::VehicleStatus>();

            // initialize latest command
            latest_command_ = std::make_shared<roar_gokart_msgs::msg::EgoVehicleControl>();

            
            // Initialize socket connection PHASE II
            //int sock = socket(AF_INET, SOCK_DGRAM, 0);


            // Initialize logger
            // _logger = rclcpp::get_logger("arduino_communicator_node");
            // set level of logger
            // _logger.set_level(rclcpp::logging::LogLevel::Debug);
            // Log message
            // RCLCPP_INFO(_logger, "ArduinoCommunicatorNode has been initialized");
        }
        ArduinoCommunicatorNode::~ArduinoCommunicatorNode()
        {
            // Destructor
            
        }

        // // tutorial, to remove
        // void ArduinoCommunicatorNode::timer_callback() {
        //     // Create a message and set its data.
        //     auto message = std_msgs::msg::String();
        //     message.data = "Hello, Arduino! Count: " + std::to_string(count_);

        //     // Publish the message.
        //     publisher_->publish(message);

        //     // Increment the count.
        //     count_++;
        // }


        // DEBUG ////////////////////////////////////////////
        // void ArduinoCommunicatorNode::on_read_timer() {
        //     // read state from arduino
        //     // Send message to IP address and port
        //     auto message = std::string("s");
        //     auto endpoint = boost::asio::ip::udp::endpoint(boost::asio::ip::address::from_string(ip_address), port);
        //     socket_.send_to(boost::asio::buffer(message), endpoint);

        //     // Receive data from socket
        //     std::array<char, 1024> buffer;
        //     boost::asio::ip::udp::endpoint sender_endpoint;
        //     size_t length = socket_.receive_from(boost::asio::buffer(buffer), sender_endpoint);

        //     // Convert received data to string and parse as JSON
        //     std::string string_data(buffer.data(), length);
        //     try {
        //         auto json_data = nlohmann::json::parse(string_data);
        //         // Convert JSON data to vehicle state model
        //         auto latest_model = p_dataToVehicleState(json_data); //implement this function
        //         // Publish latest state
        //         p_publish_state(latest_model);
        //         // Log received message
        //         RCLCPP_DEBUG(_logger, "Read: [%s]", latest_model.to_string().c_str());
        //     } catch (const std::exception& e) {
        //         // Log error if unable to parse received data as JSON
        //         RCLCPP_ERROR(_logger, "Unable to convert [%s]. Error: %s", string_data.c_str(), e.what());
        //     }
        // }

        // DEBUG ////////////////////////////////////////////
        // void ArduinoCommunicatorNode::on_write_timer() {
            // write from arduino
            // Convert latest control model to JSON string
            //auto json = latest_command_; // ->to_json(); dump ??  --- HELP

            // Convert JSON string to UTF-8 encoded byte array
            // auto message = std::vector<uint8_t>(json.begin(), json.end());

            // Log message
            // logger_ -> info("Sending message: {}", json);

            // Send message to IP address and port
            // auto ip_address = this->get_parameter("ip_address").as_string();    
            // auto port = this->get_parameter("port").as_int();
            // auto endpoint = boost::asio::ip::udp::endpoint(boost::asio::ip::address::from_string(ip_address), port);
            // socket_.send_to(boost::asio::buffer(message), endpoint);
            
        //}

        // void ArduinoCommunicatorNode::on_command(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg) {
        //     // Convert ROS message to action model
        //     auto msg = roar_gokart_msgs::msg::EgoVehicleControl();
        //     msg = p_egoVehicleControlMsgToArduinoCmdActionModel(msg)
        //     // update latest command
        //     latest_command_ = msg;
            
        //     // Log received message
        //     RCLCPP_DEBUG(_logger, "Received: %s", latest_control_model.to_string().c_str());
        // }

        // void ArduinoCommunicatorNode::on_publish_state() {
        //     // publish latest state
        //     // what does this do???? ---- HELP
        //     // Create header
        //     std_msgs::msg::Header header;
        //     header.stamp = this->now();
        //     header.frame_id = this->get_parameter("vehicle_status_header").as_string();

        //     // Create actuation message
        //     ego_vehicle_msgs::msg::Actuation act;
        //     act.throttle = curr_state.current_actuation.throttle;
        //     act.steering = curr_state.current_actuation.steering;
        //     act.brake = curr_state.current_actuation.brake;
        //     act.reverse = curr_state.current_actuation.reverse;

        //     // Create vehicle status message
        //     roar_gokart_msgs::msg::VehicleStatus msg;
        //     msg.header = header;
        //     msg.angle = curr_state.angle;
        //     msg.is_auto = curr_state.is_auto;
        //     msg.is_left_limiter_on = curr_state.is_left_limiter_ON;
        //     msg.is_right_limiter_on = curr_state.is_right_limiter_ON;
        //     msg.speed = curr_state.speed;
        //     msg.target_speed = curr_state.target_speed;
        //     msg.target_steering_angle = curr_state.target_steering_angle;
        //     msg.actuation = act;

        //     // Publish vehicle status message
        //     vehicle_state_publisher_->publish(msg);
        // }


        // Function to translate the message from ROS topic to the action model
        roar_gokart_msgs::msg::EgoVehicleControl ArduinoCommunicatorNode::p_egoVehicleControlMsgToArduinoCmdActionModel(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg) {
            roar_gokart_msgs::msg::EgoVehicleControl model;
            model.brake = std::clamp(msg->brake, 0.0f, 1.0f);
            model.reverse = msg->reverse;
            model.steering_angle = msg->steering_angle;
            model.target_speed = msg->target_speed;

            return model;
        }


        // roar_gokart_msgs::msg::VehicleStatus ArduinoCommunicatorNode::p_dataToVehicleState(const nlohmann::json& data) {
        //     // Parse JSON data to vehicle state model
        //     ArduinoVehicleStateModel model = data.get<ArduinoVehicleStateModel>();

        //     return model;
        // }


        // std::pair<std::string, int> ArduinoCommunicatorNode::p_getIPAndPort() {
        //     // Get IP address and port from parameters
        //     auto ip_address = this->get_parameter("ip_address").as_string();
        //     auto port = this->get_parameter("port").as_int();

        //     return std::make_pair(ip_address, port);
        // }



    }  // namespace arduino
}  // namespace roar


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<roar::arduino::ArduinoCommunicatorNode>());
  rclcpp::shutdown();
  return 0;
}
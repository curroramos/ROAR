#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "roar_gokart_msgs/msg/actuation.hpp"
#include "roar_gokart_msgs/msg/vehicle_status.hpp"


namespace roar
{
    namespace arduino
    {
        class ArduinoCommunicatorNode:  public rclcpp::Node
        {
            public:
                ArduinoCommunicatorNode();
                ~ArduinoCommunicatorNode();

            protected:
                // // tutorial, to remove 
                // void timer_callback();
                // rclcpp::TimerBase::SharedPtr timer_;
                // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
                // size_t count_;
                // // end

                /**
                 * on every timestep, read and write to arduino via Ethernet UDP
                */
                void on_read_timer();
                rclcpp::TimerBase::SharedPtr read_timer_;

                void on_write_timer();
                rclcpp::TimerBase::SharedPtr write_timer_;

                // define command subscriber 
                void on_command(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg);
                rclcpp::Subscription<roar_gokart_msgs::msg::EgoVehicleControl>::SharedPtr command_subscriber_;

                // define state publisher
                void on_publish_state();
                rclcpp::TimerBase::SharedPtr publish_state_timer_;
                rclcpp::Publisher<roar_gokart_msgs::msg::VehicleStatus>::SharedPtr state_publisher_;

                // define memory pointer to the latest state and command 
                std::shared_ptr<roar_gokart_msgs::msg::VehicleStatus> latest_state_;
                std::shared_ptr<roar_gokart_msgs::msg::EgoVehicleControl> latest_command_;

                // define socket connection PHASE II
                // std::pair<std::string, int> ArduinoCommunicatorNode::p_getIPAndPort() {

                // define logger
                std::shared_ptr<rclcpp::Logger> _logger;

                // define control msg to arduino command function
                roar_gokart_msgs::msg::EgoVehicleControl ArduinoCommunicatorNode::p_egoVehicleControlMsgToArduinoCmdActionModel(const roar_gokart_msgs::msg::EgoVehicleControl::SharedPtr msg); 

                // define state msg to vehicle state function 
                // roar_gokart_msgs::msg::VehicleStatus ArduinoCommunicatorNode::p_dataToVehicleState(const nlohmann::json& data) {






                



        };
    }
}
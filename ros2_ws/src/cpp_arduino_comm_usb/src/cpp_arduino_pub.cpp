#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("arduino_publisher");
  auto publisher = node->create_publisher<std_msgs::msg::String>("arduino_topic", 10);

  rclcpp::Rate loop_rate(10);

  while (rclcpp::ok())
  {
    auto message = std_msgs::msg::String();
    message.data = "Hello, Arduino!";
    
    publisher->publish(message);

    rclcpp::spin_some(node);
    loop_rate.sleep();
  }

  rclcpp::shutdown();
  return 0;
}

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roar_gokart_msgs:msg/EgoVehicleControl.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__TRAITS_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roar_gokart_msgs/msg/detail/ego_vehicle_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace roar_gokart_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EgoVehicleControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: target_speed
  {
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EgoVehicleControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: target_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EgoVehicleControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace roar_gokart_msgs

namespace rosidl_generator_traits
{

[[deprecated("use roar_gokart_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const roar_gokart_msgs::msg::EgoVehicleControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  roar_gokart_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roar_gokart_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const roar_gokart_msgs::msg::EgoVehicleControl & msg)
{
  return roar_gokart_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roar_gokart_msgs::msg::EgoVehicleControl>()
{
  return "roar_gokart_msgs::msg::EgoVehicleControl";
}

template<>
inline const char * name<roar_gokart_msgs::msg::EgoVehicleControl>()
{
  return "roar_gokart_msgs/msg/EgoVehicleControl";
}

template<>
struct has_fixed_size<roar_gokart_msgs::msg::EgoVehicleControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<roar_gokart_msgs::msg::EgoVehicleControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<roar_gokart_msgs::msg::EgoVehicleControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__TRAITS_HPP_

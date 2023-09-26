// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "roar_gokart_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'actuation'
#include "roar_gokart_msgs/msg/detail/actuation__traits.hpp"

namespace roar_gokart_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: is_left_limiter_on
  {
    out << "is_left_limiter_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_left_limiter_on, out);
    out << ", ";
  }

  // member: is_right_limiter_on
  {
    out << "is_right_limiter_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_right_limiter_on, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: is_auto
  {
    out << "is_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.is_auto, out);
    out << ", ";
  }

  // member: target_speed
  {
    out << "target_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.target_speed, out);
    out << ", ";
  }

  // member: target_steering_angle
  {
    out << "target_steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_steering_angle, out);
    out << ", ";
  }

  // member: actuation
  {
    out << "actuation: ";
    to_flow_style_yaml(msg.actuation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStatus & msg,
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

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: is_left_limiter_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_left_limiter_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_left_limiter_on, out);
    out << "\n";
  }

  // member: is_right_limiter_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_right_limiter_on: ";
    rosidl_generator_traits::value_to_yaml(msg.is_right_limiter_on, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: is_auto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_auto: ";
    rosidl_generator_traits::value_to_yaml(msg.is_auto, out);
    out << "\n";
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

  // member: target_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_steering_angle, out);
    out << "\n";
  }

  // member: actuation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuation:\n";
    to_block_style_yaml(msg.actuation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStatus & msg, bool use_flow_style = false)
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
  const roar_gokart_msgs::msg::VehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  roar_gokart_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use roar_gokart_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const roar_gokart_msgs::msg::VehicleStatus & msg)
{
  return roar_gokart_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<roar_gokart_msgs::msg::VehicleStatus>()
{
  return "roar_gokart_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<roar_gokart_msgs::msg::VehicleStatus>()
{
  return "roar_gokart_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<roar_gokart_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_fixed_size<roar_gokart_msgs::msg::Actuation>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<roar_gokart_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_bounded_size<roar_gokart_msgs::msg::Actuation>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<roar_gokart_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

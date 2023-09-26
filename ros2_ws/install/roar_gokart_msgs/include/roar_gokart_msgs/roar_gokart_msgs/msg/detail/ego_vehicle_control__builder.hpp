// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_gokart_msgs:msg/EgoVehicleControl.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__BUILDER_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roar_gokart_msgs/msg/detail/ego_vehicle_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roar_gokart_msgs
{

namespace msg
{

namespace builder
{

class Init_EgoVehicleControl_reverse
{
public:
  explicit Init_EgoVehicleControl_reverse(::roar_gokart_msgs::msg::EgoVehicleControl & msg)
  : msg_(msg)
  {}
  ::roar_gokart_msgs::msg::EgoVehicleControl reverse(::roar_gokart_msgs::msg::EgoVehicleControl::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_gokart_msgs::msg::EgoVehicleControl msg_;
};

class Init_EgoVehicleControl_brake
{
public:
  explicit Init_EgoVehicleControl_brake(::roar_gokart_msgs::msg::EgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControl_reverse brake(::roar_gokart_msgs::msg::EgoVehicleControl::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_EgoVehicleControl_reverse(msg_);
  }

private:
  ::roar_gokart_msgs::msg::EgoVehicleControl msg_;
};

class Init_EgoVehicleControl_steering_angle
{
public:
  explicit Init_EgoVehicleControl_steering_angle(::roar_gokart_msgs::msg::EgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControl_brake steering_angle(::roar_gokart_msgs::msg::EgoVehicleControl::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_EgoVehicleControl_brake(msg_);
  }

private:
  ::roar_gokart_msgs::msg::EgoVehicleControl msg_;
};

class Init_EgoVehicleControl_target_speed
{
public:
  explicit Init_EgoVehicleControl_target_speed(::roar_gokart_msgs::msg::EgoVehicleControl & msg)
  : msg_(msg)
  {}
  Init_EgoVehicleControl_steering_angle target_speed(::roar_gokart_msgs::msg::EgoVehicleControl::_target_speed_type arg)
  {
    msg_.target_speed = std::move(arg);
    return Init_EgoVehicleControl_steering_angle(msg_);
  }

private:
  ::roar_gokart_msgs::msg::EgoVehicleControl msg_;
};

class Init_EgoVehicleControl_header
{
public:
  Init_EgoVehicleControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EgoVehicleControl_target_speed header(::roar_gokart_msgs::msg::EgoVehicleControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EgoVehicleControl_target_speed(msg_);
  }

private:
  ::roar_gokart_msgs::msg::EgoVehicleControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_gokart_msgs::msg::EgoVehicleControl>()
{
  return roar_gokart_msgs::msg::builder::Init_EgoVehicleControl_header();
}

}  // namespace roar_gokart_msgs

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__BUILDER_HPP_

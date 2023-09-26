// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roar_gokart_msgs/msg/detail/vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roar_gokart_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_actuation
{
public:
  explicit Init_VehicleStatus_actuation(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::roar_gokart_msgs::msg::VehicleStatus actuation(::roar_gokart_msgs::msg::VehicleStatus::_actuation_type arg)
  {
    msg_.actuation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_target_steering_angle
{
public:
  explicit Init_VehicleStatus_target_steering_angle(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_actuation target_steering_angle(::roar_gokart_msgs::msg::VehicleStatus::_target_steering_angle_type arg)
  {
    msg_.target_steering_angle = std::move(arg);
    return Init_VehicleStatus_actuation(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_target_speed
{
public:
  explicit Init_VehicleStatus_target_speed(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_target_steering_angle target_speed(::roar_gokart_msgs::msg::VehicleStatus::_target_speed_type arg)
  {
    msg_.target_speed = std::move(arg);
    return Init_VehicleStatus_target_steering_angle(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_auto
{
public:
  explicit Init_VehicleStatus_is_auto(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_target_speed is_auto(::roar_gokart_msgs::msg::VehicleStatus::_is_auto_type arg)
  {
    msg_.is_auto = std::move(arg);
    return Init_VehicleStatus_target_speed(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_speed
{
public:
  explicit Init_VehicleStatus_speed(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_auto speed(::roar_gokart_msgs::msg::VehicleStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_VehicleStatus_is_auto(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_right_limiter_on
{
public:
  explicit Init_VehicleStatus_is_right_limiter_on(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_speed is_right_limiter_on(::roar_gokart_msgs::msg::VehicleStatus::_is_right_limiter_on_type arg)
  {
    msg_.is_right_limiter_on = std::move(arg);
    return Init_VehicleStatus_speed(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_left_limiter_on
{
public:
  explicit Init_VehicleStatus_is_left_limiter_on(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_right_limiter_on is_left_limiter_on(::roar_gokart_msgs::msg::VehicleStatus::_is_left_limiter_on_type arg)
  {
    msg_.is_left_limiter_on = std::move(arg);
    return Init_VehicleStatus_is_right_limiter_on(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_angle
{
public:
  explicit Init_VehicleStatus_angle(::roar_gokart_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_left_limiter_on angle(::roar_gokart_msgs::msg::VehicleStatus::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_VehicleStatus_is_left_limiter_on(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_header
{
public:
  Init_VehicleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_angle header(::roar_gokart_msgs::msg::VehicleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStatus_angle(msg_);
  }

private:
  ::roar_gokart_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_gokart_msgs::msg::VehicleStatus>()
{
  return roar_gokart_msgs::msg::builder::Init_VehicleStatus_header();
}

}  // namespace roar_gokart_msgs

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

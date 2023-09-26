// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__BUILDER_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "roar_gokart_msgs/msg/detail/actuation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace roar_gokart_msgs
{

namespace msg
{

namespace builder
{

class Init_Actuation_reverse
{
public:
  explicit Init_Actuation_reverse(::roar_gokart_msgs::msg::Actuation & msg)
  : msg_(msg)
  {}
  ::roar_gokart_msgs::msg::Actuation reverse(::roar_gokart_msgs::msg::Actuation::_reverse_type arg)
  {
    msg_.reverse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::roar_gokart_msgs::msg::Actuation msg_;
};

class Init_Actuation_brake
{
public:
  explicit Init_Actuation_brake(::roar_gokart_msgs::msg::Actuation & msg)
  : msg_(msg)
  {}
  Init_Actuation_reverse brake(::roar_gokart_msgs::msg::Actuation::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_Actuation_reverse(msg_);
  }

private:
  ::roar_gokart_msgs::msg::Actuation msg_;
};

class Init_Actuation_steering
{
public:
  explicit Init_Actuation_steering(::roar_gokart_msgs::msg::Actuation & msg)
  : msg_(msg)
  {}
  Init_Actuation_brake steering(::roar_gokart_msgs::msg::Actuation::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_Actuation_brake(msg_);
  }

private:
  ::roar_gokart_msgs::msg::Actuation msg_;
};

class Init_Actuation_throttle
{
public:
  Init_Actuation_throttle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Actuation_steering throttle(::roar_gokart_msgs::msg::Actuation::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_Actuation_steering(msg_);
  }

private:
  ::roar_gokart_msgs::msg::Actuation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::roar_gokart_msgs::msg::Actuation>()
{
  return roar_gokart_msgs::msg::builder::Init_Actuation_throttle();
}

}  // namespace roar_gokart_msgs

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__BUILDER_HPP_

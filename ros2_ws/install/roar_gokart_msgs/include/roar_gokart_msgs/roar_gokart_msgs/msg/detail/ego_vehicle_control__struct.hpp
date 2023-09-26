// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roar_gokart_msgs:msg/EgoVehicleControl.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__STRUCT_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__roar_gokart_msgs__msg__EgoVehicleControl __attribute__((deprecated))
#else
# define DEPRECATED__roar_gokart_msgs__msg__EgoVehicleControl __declspec(deprecated)
#endif

namespace roar_gokart_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoVehicleControl_
{
  using Type = EgoVehicleControl_<ContainerAllocator>;

  explicit EgoVehicleControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_speed = 0.0f;
      this->steering_angle = 0.0f;
      this->brake = 0.0f;
      this->reverse = false;
    }
  }

  explicit EgoVehicleControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_speed = 0.0f;
      this->steering_angle = 0.0f;
      this->brake = 0.0f;
      this->reverse = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_speed_type =
    float;
  _target_speed_type target_speed;
  using _steering_angle_type =
    float;
  _steering_angle_type steering_angle;
  using _brake_type =
    float;
  _brake_type brake;
  using _reverse_type =
    bool;
  _reverse_type reverse;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_speed(
    const float & _arg)
  {
    this->target_speed = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const float & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__brake(
    const float & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__reverse(
    const bool & _arg)
  {
    this->reverse = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roar_gokart_msgs__msg__EgoVehicleControl
    std::shared_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roar_gokart_msgs__msg__EgoVehicleControl
    std::shared_ptr<roar_gokart_msgs::msg::EgoVehicleControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoVehicleControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_speed != other.target_speed) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoVehicleControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoVehicleControl_

// alias to use template instance with default allocator
using EgoVehicleControl =
  roar_gokart_msgs::msg::EgoVehicleControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roar_gokart_msgs

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL__STRUCT_HPP_

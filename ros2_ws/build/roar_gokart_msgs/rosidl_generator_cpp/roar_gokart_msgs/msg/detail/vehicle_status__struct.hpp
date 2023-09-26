// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

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
// Member 'actuation'
#include "roar_gokart_msgs/msg/detail/actuation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__roar_gokart_msgs__msg__VehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__roar_gokart_msgs__msg__VehicleStatus __declspec(deprecated)
#endif

namespace roar_gokart_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatus_
{
  using Type = VehicleStatus_<ContainerAllocator>;

  explicit VehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    actuation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->is_left_limiter_on = false;
      this->is_right_limiter_on = false;
      this->speed = 0.0f;
      this->is_auto = false;
      this->target_speed = 0.0f;
      this->target_steering_angle = 0.0f;
    }
  }

  explicit VehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    actuation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0.0f;
      this->is_left_limiter_on = false;
      this->is_right_limiter_on = false;
      this->speed = 0.0f;
      this->is_auto = false;
      this->target_speed = 0.0f;
      this->target_steering_angle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_type =
    float;
  _angle_type angle;
  using _is_left_limiter_on_type =
    bool;
  _is_left_limiter_on_type is_left_limiter_on;
  using _is_right_limiter_on_type =
    bool;
  _is_right_limiter_on_type is_right_limiter_on;
  using _speed_type =
    float;
  _speed_type speed;
  using _is_auto_type =
    bool;
  _is_auto_type is_auto;
  using _target_speed_type =
    float;
  _target_speed_type target_speed;
  using _target_steering_angle_type =
    float;
  _target_steering_angle_type target_steering_angle;
  using _actuation_type =
    roar_gokart_msgs::msg::Actuation_<ContainerAllocator>;
  _actuation_type actuation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__is_left_limiter_on(
    const bool & _arg)
  {
    this->is_left_limiter_on = _arg;
    return *this;
  }
  Type & set__is_right_limiter_on(
    const bool & _arg)
  {
    this->is_right_limiter_on = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__is_auto(
    const bool & _arg)
  {
    this->is_auto = _arg;
    return *this;
  }
  Type & set__target_speed(
    const float & _arg)
  {
    this->target_speed = _arg;
    return *this;
  }
  Type & set__target_steering_angle(
    const float & _arg)
  {
    this->target_steering_angle = _arg;
    return *this;
  }
  Type & set__actuation(
    const roar_gokart_msgs::msg::Actuation_<ContainerAllocator> & _arg)
  {
    this->actuation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roar_gokart_msgs__msg__VehicleStatus
    std::shared_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roar_gokart_msgs__msg__VehicleStatus
    std::shared_ptr<roar_gokart_msgs::msg::VehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->is_left_limiter_on != other.is_left_limiter_on) {
      return false;
    }
    if (this->is_right_limiter_on != other.is_right_limiter_on) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->is_auto != other.is_auto) {
      return false;
    }
    if (this->target_speed != other.target_speed) {
      return false;
    }
    if (this->target_steering_angle != other.target_steering_angle) {
      return false;
    }
    if (this->actuation != other.actuation) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatus_

// alias to use template instance with default allocator
using VehicleStatus =
  roar_gokart_msgs::msg::VehicleStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roar_gokart_msgs

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice

#ifndef ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__STRUCT_HPP_
#define ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__roar_gokart_msgs__msg__Actuation __attribute__((deprecated))
#else
# define DEPRECATED__roar_gokart_msgs__msg__Actuation __declspec(deprecated)
#endif

namespace roar_gokart_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Actuation_
{
  using Type = Actuation_<ContainerAllocator>;

  explicit Actuation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering = 0.0f;
      this->brake = 0.0f;
      this->reverse = false;
    }
  }

  explicit Actuation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering = 0.0f;
      this->brake = 0.0f;
      this->reverse = false;
    }
  }

  // field types and members
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _steering_type =
    float;
  _steering_type steering;
  using _brake_type =
    float;
  _brake_type brake;
  using _reverse_type =
    bool;
  _reverse_type reverse;

  // setters for named parameter idiom
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
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
    roar_gokart_msgs::msg::Actuation_<ContainerAllocator> *;
  using ConstRawPtr =
    const roar_gokart_msgs::msg::Actuation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      roar_gokart_msgs::msg::Actuation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      roar_gokart_msgs::msg::Actuation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__roar_gokart_msgs__msg__Actuation
    std::shared_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__roar_gokart_msgs__msg__Actuation
    std::shared_ptr<roar_gokart_msgs::msg::Actuation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Actuation_ & other) const
  {
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering != other.steering) {
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
  bool operator!=(const Actuation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Actuation_

// alias to use template instance with default allocator
using Actuation =
  roar_gokart_msgs::msg::Actuation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace roar_gokart_msgs

#endif  // ROAR_GOKART_MSGS__MSG__DETAIL__ACTUATION__STRUCT_HPP_

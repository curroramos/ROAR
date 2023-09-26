// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "roar_gokart_msgs/msg/detail/actuation__functions.h"
#include "roar_gokart_msgs/msg/detail/actuation__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace roar_gokart_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Actuation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) roar_gokart_msgs::msg::Actuation(_init);
}

void Actuation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<roar_gokart_msgs::msg::Actuation *>(message_memory);
  typed_message->~Actuation();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Actuation_message_member_array[4] = {
  {
    "throttle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs::msg::Actuation, throttle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs::msg::Actuation, steering),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "brake",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs::msg::Actuation, brake),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reverse",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs::msg::Actuation, reverse),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Actuation_message_members = {
  "roar_gokart_msgs::msg",  // message namespace
  "Actuation",  // message name
  4,  // number of fields
  sizeof(roar_gokart_msgs::msg::Actuation),
  Actuation_message_member_array,  // message members
  Actuation_init_function,  // function to initialize message memory (memory has to be allocated)
  Actuation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Actuation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Actuation_message_members,
  get_message_typesupport_handle_function,
  &roar_gokart_msgs__msg__Actuation__get_type_hash,
  &roar_gokart_msgs__msg__Actuation__get_type_description,
  &roar_gokart_msgs__msg__Actuation__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace roar_gokart_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<roar_gokart_msgs::msg::Actuation>()
{
  return &::roar_gokart_msgs::msg::rosidl_typesupport_introspection_cpp::Actuation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, roar_gokart_msgs, msg, Actuation)() {
  return &::roar_gokart_msgs::msg::rosidl_typesupport_introspection_cpp::Actuation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

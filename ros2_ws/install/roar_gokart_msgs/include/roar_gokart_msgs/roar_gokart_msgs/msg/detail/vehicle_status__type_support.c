// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "roar_gokart_msgs/msg/detail/vehicle_status__rosidl_typesupport_introspection_c.h"
#include "roar_gokart_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__functions.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `actuation`
#include "roar_gokart_msgs/msg/actuation.h"
// Member `actuation`
#include "roar_gokart_msgs/msg/detail/actuation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  roar_gokart_msgs__msg__VehicleStatus__init(message_memory);
}

void roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function(void * message_memory)
{
  roar_gokart_msgs__msg__VehicleStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_left_limiter_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, is_left_limiter_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_right_limiter_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, is_right_limiter_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_auto",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, is_auto),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, target_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, target_steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(roar_gokart_msgs__msg__VehicleStatus, actuation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members = {
  "roar_gokart_msgs__msg",  // message namespace
  "VehicleStatus",  // message name
  9,  // number of fields
  sizeof(roar_gokart_msgs__msg__VehicleStatus),
  roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array,  // message members
  roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle = {
  0,
  &roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_members,
  get_message_typesupport_handle_function,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_hash,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_description,
  &roar_gokart_msgs__msg__VehicleStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_roar_gokart_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_gokart_msgs, msg, VehicleStatus)() {
  roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, roar_gokart_msgs, msg, Actuation)();
  if (!roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier) {
    roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &roar_gokart_msgs__msg__VehicleStatus__rosidl_typesupport_introspection_c__VehicleStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from roar_gokart_msgs:msg/Actuation.idl
// generated code does not contain a copyright notice
#include "roar_gokart_msgs/msg/detail/actuation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "roar_gokart_msgs/msg/detail/actuation__functions.h"
#include "roar_gokart_msgs/msg/detail/actuation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace roar_gokart_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
cdr_serialize(
  const roar_gokart_msgs::msg::Actuation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: throttle
  cdr << ros_message.throttle;
  // Member: steering
  cdr << ros_message.steering;
  // Member: brake
  cdr << ros_message.brake;
  // Member: reverse
  cdr << (ros_message.reverse ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  roar_gokart_msgs::msg::Actuation & ros_message)
{
  // Member: throttle
  cdr >> ros_message.throttle;

  // Member: steering
  cdr >> ros_message.steering;

  // Member: brake
  cdr >> ros_message.brake;

  // Member: reverse
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverse = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
get_serialized_size(
  const roar_gokart_msgs::msg::Actuation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: throttle
  {
    size_t item_size = sizeof(ros_message.throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering
  {
    size_t item_size = sizeof(ros_message.steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reverse
  {
    size_t item_size = sizeof(ros_message.reverse);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_roar_gokart_msgs
max_serialized_size_Actuation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reverse
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Actuation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const roar_gokart_msgs::msg::Actuation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Actuation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<roar_gokart_msgs::msg::Actuation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Actuation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const roar_gokart_msgs::msg::Actuation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Actuation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Actuation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Actuation__callbacks = {
  "roar_gokart_msgs::msg",
  "Actuation",
  _Actuation__cdr_serialize,
  _Actuation__cdr_deserialize,
  _Actuation__get_serialized_size,
  _Actuation__max_serialized_size
};

static rosidl_message_type_support_t _Actuation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Actuation__callbacks,
  get_message_typesupport_handle_function,
  &roar_gokart_msgs__msg__Actuation__get_type_hash,
  &roar_gokart_msgs__msg__Actuation__get_type_description,
  &roar_gokart_msgs__msg__Actuation__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace roar_gokart_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_roar_gokart_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<roar_gokart_msgs::msg::Actuation>()
{
  return &roar_gokart_msgs::msg::typesupport_fastrtps_cpp::_Actuation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, roar_gokart_msgs, msg, Actuation)() {
  return &roar_gokart_msgs::msg::typesupport_fastrtps_cpp::_Actuation__handle;
}

#ifdef __cplusplus
}
#endif
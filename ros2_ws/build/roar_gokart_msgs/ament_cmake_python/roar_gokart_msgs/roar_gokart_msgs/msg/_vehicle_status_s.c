// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from roar_gokart_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__struct.h"
#include "roar_gokart_msgs/msg/detail/vehicle_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool roar_gokart_msgs__msg__actuation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * roar_gokart_msgs__msg__actuation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool roar_gokart_msgs__msg__vehicle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("roar_gokart_msgs.msg._vehicle_status.VehicleStatus", full_classname_dest, 50) == 0);
  }
  roar_gokart_msgs__msg__VehicleStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_left_limiter_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_left_limiter_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_left_limiter_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_right_limiter_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_right_limiter_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_right_limiter_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_auto
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_auto");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_auto = (Py_True == field);
    Py_DECREF(field);
  }
  {  // target_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_steering_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actuation
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuation");
    if (!field) {
      return false;
    }
    if (!roar_gokart_msgs__msg__actuation__convert_from_py(field, &ros_message->actuation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * roar_gokart_msgs__msg__vehicle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("roar_gokart_msgs.msg._vehicle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  roar_gokart_msgs__msg__VehicleStatus * ros_message = (roar_gokart_msgs__msg__VehicleStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_left_limiter_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_left_limiter_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_left_limiter_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_right_limiter_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_right_limiter_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_right_limiter_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_auto
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_auto ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_auto", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuation
    PyObject * field = NULL;
    field = roar_gokart_msgs__msg__actuation__convert_to_py(&ros_message->actuation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
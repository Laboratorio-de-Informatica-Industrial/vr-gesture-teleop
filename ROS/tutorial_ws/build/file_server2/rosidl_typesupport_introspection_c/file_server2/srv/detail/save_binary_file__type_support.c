// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from file_server2:srv/SaveBinaryFile.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "file_server2/srv/detail/save_binary_file__rosidl_typesupport_introspection_c.h"
#include "file_server2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "file_server2/srv/detail/save_binary_file__functions.h"
#include "file_server2/srv/detail/save_binary_file__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  file_server2__srv__SaveBinaryFile_Request__init(message_memory);
}

void file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_fini_function(void * message_memory)
{
  file_server2__srv__SaveBinaryFile_Request__fini(message_memory);
}

size_t file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__size_function__SaveBinaryFile_Request__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Request__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Request__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__fetch_function__SaveBinaryFile_Request__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Request__value(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__assign_function__SaveBinaryFile_Request__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Request__value(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__resize_function__SaveBinaryFile_Request__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(file_server2__srv__SaveBinaryFile_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(file_server2__srv__SaveBinaryFile_Request, value),  // bytes offset in struct
    NULL,  // default value
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__size_function__SaveBinaryFile_Request__value,  // size() function pointer
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Request__value,  // get_const(index) function pointer
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Request__value,  // get(index) function pointer
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__fetch_function__SaveBinaryFile_Request__value,  // fetch(index, &value) function pointer
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__assign_function__SaveBinaryFile_Request__value,  // assign(index, value) function pointer
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__resize_function__SaveBinaryFile_Request__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_members = {
  "file_server2__srv",  // message namespace
  "SaveBinaryFile_Request",  // message name
  2,  // number of fields
  sizeof(file_server2__srv__SaveBinaryFile_Request),
  false,  // has_any_key_member_
  file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_member_array,  // message members
  file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_type_support_handle = {
  0,
  &file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_members,
  get_message_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Request__get_type_hash,
  &file_server2__srv__SaveBinaryFile_Request__get_type_description,
  &file_server2__srv__SaveBinaryFile_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_file_server2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Request)() {
  if (!file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_type_support_handle.typesupport_identifier) {
    file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "file_server2/srv/detail/save_binary_file__rosidl_typesupport_introspection_c.h"
// already included above
// #include "file_server2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__functions.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__struct.h"


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  file_server2__srv__SaveBinaryFile_Response__init(message_memory);
}

void file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_fini_function(void * message_memory)
{
  file_server2__srv__SaveBinaryFile_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_member_array[1] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(file_server2__srv__SaveBinaryFile_Response, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_members = {
  "file_server2__srv",  // message namespace
  "SaveBinaryFile_Response",  // message name
  1,  // number of fields
  sizeof(file_server2__srv__SaveBinaryFile_Response),
  false,  // has_any_key_member_
  file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_member_array,  // message members
  file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle = {
  0,
  &file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_members,
  get_message_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Response__get_type_hash,
  &file_server2__srv__SaveBinaryFile_Response__get_type_description,
  &file_server2__srv__SaveBinaryFile_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_file_server2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Response)() {
  if (!file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle.typesupport_identifier) {
    file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "file_server2/srv/detail/save_binary_file__rosidl_typesupport_introspection_c.h"
// already included above
// #include "file_server2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__functions.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "file_server2/srv/save_binary_file.h"
// Member `request`
// Member `response`
// already included above
// #include "file_server2/srv/detail/save_binary_file__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  file_server2__srv__SaveBinaryFile_Event__init(message_memory);
}

void file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_fini_function(void * message_memory)
{
  file_server2__srv__SaveBinaryFile_Event__fini(message_memory);
}

size_t file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__size_function__SaveBinaryFile_Event__request(
  const void * untyped_member)
{
  const file_server2__srv__SaveBinaryFile_Request__Sequence * member =
    (const file_server2__srv__SaveBinaryFile_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Event__request(
  const void * untyped_member, size_t index)
{
  const file_server2__srv__SaveBinaryFile_Request__Sequence * member =
    (const file_server2__srv__SaveBinaryFile_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Event__request(
  void * untyped_member, size_t index)
{
  file_server2__srv__SaveBinaryFile_Request__Sequence * member =
    (file_server2__srv__SaveBinaryFile_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__fetch_function__SaveBinaryFile_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const file_server2__srv__SaveBinaryFile_Request * item =
    ((const file_server2__srv__SaveBinaryFile_Request *)
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Event__request(untyped_member, index));
  file_server2__srv__SaveBinaryFile_Request * value =
    (file_server2__srv__SaveBinaryFile_Request *)(untyped_value);
  *value = *item;
}

void file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__assign_function__SaveBinaryFile_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  file_server2__srv__SaveBinaryFile_Request * item =
    ((file_server2__srv__SaveBinaryFile_Request *)
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Event__request(untyped_member, index));
  const file_server2__srv__SaveBinaryFile_Request * value =
    (const file_server2__srv__SaveBinaryFile_Request *)(untyped_value);
  *item = *value;
}

bool file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__resize_function__SaveBinaryFile_Event__request(
  void * untyped_member, size_t size)
{
  file_server2__srv__SaveBinaryFile_Request__Sequence * member =
    (file_server2__srv__SaveBinaryFile_Request__Sequence *)(untyped_member);
  file_server2__srv__SaveBinaryFile_Request__Sequence__fini(member);
  return file_server2__srv__SaveBinaryFile_Request__Sequence__init(member, size);
}

size_t file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__size_function__SaveBinaryFile_Event__response(
  const void * untyped_member)
{
  const file_server2__srv__SaveBinaryFile_Response__Sequence * member =
    (const file_server2__srv__SaveBinaryFile_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Event__response(
  const void * untyped_member, size_t index)
{
  const file_server2__srv__SaveBinaryFile_Response__Sequence * member =
    (const file_server2__srv__SaveBinaryFile_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Event__response(
  void * untyped_member, size_t index)
{
  file_server2__srv__SaveBinaryFile_Response__Sequence * member =
    (file_server2__srv__SaveBinaryFile_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__fetch_function__SaveBinaryFile_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const file_server2__srv__SaveBinaryFile_Response * item =
    ((const file_server2__srv__SaveBinaryFile_Response *)
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Event__response(untyped_member, index));
  file_server2__srv__SaveBinaryFile_Response * value =
    (file_server2__srv__SaveBinaryFile_Response *)(untyped_value);
  *value = *item;
}

void file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__assign_function__SaveBinaryFile_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  file_server2__srv__SaveBinaryFile_Response * item =
    ((file_server2__srv__SaveBinaryFile_Response *)
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Event__response(untyped_member, index));
  const file_server2__srv__SaveBinaryFile_Response * value =
    (const file_server2__srv__SaveBinaryFile_Response *)(untyped_value);
  *item = *value;
}

bool file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__resize_function__SaveBinaryFile_Event__response(
  void * untyped_member, size_t size)
{
  file_server2__srv__SaveBinaryFile_Response__Sequence * member =
    (file_server2__srv__SaveBinaryFile_Response__Sequence *)(untyped_member);
  file_server2__srv__SaveBinaryFile_Response__Sequence__fini(member);
  return file_server2__srv__SaveBinaryFile_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(file_server2__srv__SaveBinaryFile_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(file_server2__srv__SaveBinaryFile_Event, request),  // bytes offset in struct
    NULL,  // default value
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__size_function__SaveBinaryFile_Event__request,  // size() function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Event__request,  // get_const(index) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Event__request,  // get(index) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__fetch_function__SaveBinaryFile_Event__request,  // fetch(index, &value) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__assign_function__SaveBinaryFile_Event__request,  // assign(index, value) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__resize_function__SaveBinaryFile_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(file_server2__srv__SaveBinaryFile_Event, response),  // bytes offset in struct
    NULL,  // default value
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__size_function__SaveBinaryFile_Event__response,  // size() function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_const_function__SaveBinaryFile_Event__response,  // get_const(index) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__get_function__SaveBinaryFile_Event__response,  // get(index) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__fetch_function__SaveBinaryFile_Event__response,  // fetch(index, &value) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__assign_function__SaveBinaryFile_Event__response,  // assign(index, value) function pointer
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__resize_function__SaveBinaryFile_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_members = {
  "file_server2__srv",  // message namespace
  "SaveBinaryFile_Event",  // message name
  3,  // number of fields
  sizeof(file_server2__srv__SaveBinaryFile_Event),
  false,  // has_any_key_member_
  file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_member_array,  // message members
  file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_type_support_handle = {
  0,
  &file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_members,
  get_message_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Event__get_type_hash,
  &file_server2__srv__SaveBinaryFile_Event__get_type_description,
  &file_server2__srv__SaveBinaryFile_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_file_server2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Event)() {
  file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Request)();
  file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Response)();
  if (!file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_type_support_handle.typesupport_identifier) {
    file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "file_server2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_members = {
  "file_server2__srv",  // service namespace
  "SaveBinaryFile",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_type_support_handle,
  NULL,  // response message
  // file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle
  NULL  // event_message
  // file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle
};


static rosidl_service_type_support_t file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_type_support_handle = {
  0,
  &file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_members,
  get_service_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Request__rosidl_typesupport_introspection_c__SaveBinaryFile_Request_message_type_support_handle,
  &file_server2__srv__SaveBinaryFile_Response__rosidl_typesupport_introspection_c__SaveBinaryFile_Response_message_type_support_handle,
  &file_server2__srv__SaveBinaryFile_Event__rosidl_typesupport_introspection_c__SaveBinaryFile_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    file_server2,
    srv,
    SaveBinaryFile
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    file_server2,
    srv,
    SaveBinaryFile
  ),
  &file_server2__srv__SaveBinaryFile__get_type_hash,
  &file_server2__srv__SaveBinaryFile__get_type_description,
  &file_server2__srv__SaveBinaryFile__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_file_server2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile)(void) {
  if (!file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_type_support_handle.typesupport_identifier) {
    file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, SaveBinaryFile_Event)()->data;
  }

  return &file_server2__srv__detail__save_binary_file__rosidl_typesupport_introspection_c__SaveBinaryFile_service_type_support_handle;
}

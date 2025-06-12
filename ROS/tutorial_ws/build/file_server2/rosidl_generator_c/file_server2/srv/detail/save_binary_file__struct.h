// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from file_server2:srv/SaveBinaryFile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "file_server2/srv/save_binary_file.h"


#ifndef FILE_SERVER2__SRV__DETAIL__SAVE_BINARY_FILE__STRUCT_H_
#define FILE_SERVER2__SRV__DETAIL__SAVE_BINARY_FILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SaveBinaryFile in the package file_server2.
typedef struct file_server2__srv__SaveBinaryFile_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__uint8__Sequence value;
} file_server2__srv__SaveBinaryFile_Request;

// Struct for a sequence of file_server2__srv__SaveBinaryFile_Request.
typedef struct file_server2__srv__SaveBinaryFile_Request__Sequence
{
  file_server2__srv__SaveBinaryFile_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} file_server2__srv__SaveBinaryFile_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveBinaryFile in the package file_server2.
typedef struct file_server2__srv__SaveBinaryFile_Response
{
  rosidl_runtime_c__String name;
} file_server2__srv__SaveBinaryFile_Response;

// Struct for a sequence of file_server2__srv__SaveBinaryFile_Response.
typedef struct file_server2__srv__SaveBinaryFile_Response__Sequence
{
  file_server2__srv__SaveBinaryFile_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} file_server2__srv__SaveBinaryFile_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  file_server2__srv__SaveBinaryFile_Event__request__MAX_SIZE = 1
};
// response
enum
{
  file_server2__srv__SaveBinaryFile_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SaveBinaryFile in the package file_server2.
typedef struct file_server2__srv__SaveBinaryFile_Event
{
  service_msgs__msg__ServiceEventInfo info;
  file_server2__srv__SaveBinaryFile_Request__Sequence request;
  file_server2__srv__SaveBinaryFile_Response__Sequence response;
} file_server2__srv__SaveBinaryFile_Event;

// Struct for a sequence of file_server2__srv__SaveBinaryFile_Event.
typedef struct file_server2__srv__SaveBinaryFile_Event__Sequence
{
  file_server2__srv__SaveBinaryFile_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} file_server2__srv__SaveBinaryFile_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FILE_SERVER2__SRV__DETAIL__SAVE_BINARY_FILE__STRUCT_H_

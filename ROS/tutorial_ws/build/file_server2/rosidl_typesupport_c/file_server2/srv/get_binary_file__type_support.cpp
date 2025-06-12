// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from file_server2:srv/GetBinaryFile.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "file_server2/srv/detail/get_binary_file__struct.h"
#include "file_server2/srv/detail/get_binary_file__type_support.h"
#include "file_server2/srv/detail/get_binary_file__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetBinaryFile_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBinaryFile_Request_type_support_ids_t;

static const _GetBinaryFile_Request_type_support_ids_t _GetBinaryFile_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBinaryFile_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBinaryFile_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBinaryFile_Request_type_support_symbol_names_t _GetBinaryFile_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, file_server2, srv, GetBinaryFile_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, GetBinaryFile_Request)),
  }
};

typedef struct _GetBinaryFile_Request_type_support_data_t
{
  void * data[2];
} _GetBinaryFile_Request_type_support_data_t;

static _GetBinaryFile_Request_type_support_data_t _GetBinaryFile_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBinaryFile_Request_message_typesupport_map = {
  2,
  "file_server2",
  &_GetBinaryFile_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetBinaryFile_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetBinaryFile_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetBinaryFile_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBinaryFile_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &file_server2__srv__GetBinaryFile_Request__get_type_hash,
  &file_server2__srv__GetBinaryFile_Request__get_type_description,
  &file_server2__srv__GetBinaryFile_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace file_server2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, file_server2, srv, GetBinaryFile_Request)() {
  return &::file_server2::srv::rosidl_typesupport_c::GetBinaryFile_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__struct.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__type_support.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetBinaryFile_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBinaryFile_Response_type_support_ids_t;

static const _GetBinaryFile_Response_type_support_ids_t _GetBinaryFile_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBinaryFile_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBinaryFile_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBinaryFile_Response_type_support_symbol_names_t _GetBinaryFile_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, file_server2, srv, GetBinaryFile_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, GetBinaryFile_Response)),
  }
};

typedef struct _GetBinaryFile_Response_type_support_data_t
{
  void * data[2];
} _GetBinaryFile_Response_type_support_data_t;

static _GetBinaryFile_Response_type_support_data_t _GetBinaryFile_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBinaryFile_Response_message_typesupport_map = {
  2,
  "file_server2",
  &_GetBinaryFile_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetBinaryFile_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetBinaryFile_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetBinaryFile_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBinaryFile_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &file_server2__srv__GetBinaryFile_Response__get_type_hash,
  &file_server2__srv__GetBinaryFile_Response__get_type_description,
  &file_server2__srv__GetBinaryFile_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace file_server2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, file_server2, srv, GetBinaryFile_Response)() {
  return &::file_server2::srv::rosidl_typesupport_c::GetBinaryFile_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__struct.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__type_support.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetBinaryFile_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBinaryFile_Event_type_support_ids_t;

static const _GetBinaryFile_Event_type_support_ids_t _GetBinaryFile_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBinaryFile_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBinaryFile_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBinaryFile_Event_type_support_symbol_names_t _GetBinaryFile_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, file_server2, srv, GetBinaryFile_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, GetBinaryFile_Event)),
  }
};

typedef struct _GetBinaryFile_Event_type_support_data_t
{
  void * data[2];
} _GetBinaryFile_Event_type_support_data_t;

static _GetBinaryFile_Event_type_support_data_t _GetBinaryFile_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBinaryFile_Event_message_typesupport_map = {
  2,
  "file_server2",
  &_GetBinaryFile_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetBinaryFile_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetBinaryFile_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetBinaryFile_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBinaryFile_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &file_server2__srv__GetBinaryFile_Event__get_type_hash,
  &file_server2__srv__GetBinaryFile_Event__get_type_description,
  &file_server2__srv__GetBinaryFile_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace file_server2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, file_server2, srv, GetBinaryFile_Event)() {
  return &::file_server2::srv::rosidl_typesupport_c::GetBinaryFile_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "file_server2/srv/detail/get_binary_file__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetBinaryFile_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetBinaryFile_type_support_ids_t;

static const _GetBinaryFile_type_support_ids_t _GetBinaryFile_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetBinaryFile_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetBinaryFile_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetBinaryFile_type_support_symbol_names_t _GetBinaryFile_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, file_server2, srv, GetBinaryFile)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, file_server2, srv, GetBinaryFile)),
  }
};

typedef struct _GetBinaryFile_type_support_data_t
{
  void * data[2];
} _GetBinaryFile_type_support_data_t;

static _GetBinaryFile_type_support_data_t _GetBinaryFile_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetBinaryFile_service_typesupport_map = {
  2,
  "file_server2",
  &_GetBinaryFile_service_typesupport_ids.typesupport_identifier[0],
  &_GetBinaryFile_service_typesupport_symbol_names.symbol_name[0],
  &_GetBinaryFile_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetBinaryFile_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetBinaryFile_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetBinaryFile_Request_message_type_support_handle,
  &GetBinaryFile_Response_message_type_support_handle,
  &GetBinaryFile_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    file_server2,
    srv,
    GetBinaryFile
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    file_server2,
    srv,
    GetBinaryFile
  ),
  &file_server2__srv__GetBinaryFile__get_type_hash,
  &file_server2__srv__GetBinaryFile__get_type_description,
  &file_server2__srv__GetBinaryFile__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace file_server2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, file_server2, srv, GetBinaryFile)() {
  return &::file_server2::srv::rosidl_typesupport_c::GetBinaryFile_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

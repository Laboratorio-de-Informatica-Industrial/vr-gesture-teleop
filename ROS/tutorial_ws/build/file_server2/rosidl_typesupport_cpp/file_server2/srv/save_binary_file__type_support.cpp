// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from file_server2:srv/SaveBinaryFile.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "file_server2/srv/detail/save_binary_file__functions.h"
#include "file_server2/srv/detail/save_binary_file__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveBinaryFile_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveBinaryFile_Request_type_support_ids_t;

static const _SaveBinaryFile_Request_type_support_ids_t _SaveBinaryFile_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveBinaryFile_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveBinaryFile_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveBinaryFile_Request_type_support_symbol_names_t _SaveBinaryFile_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, file_server2, srv, SaveBinaryFile_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, file_server2, srv, SaveBinaryFile_Request)),
  }
};

typedef struct _SaveBinaryFile_Request_type_support_data_t
{
  void * data[2];
} _SaveBinaryFile_Request_type_support_data_t;

static _SaveBinaryFile_Request_type_support_data_t _SaveBinaryFile_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveBinaryFile_Request_message_typesupport_map = {
  2,
  "file_server2",
  &_SaveBinaryFile_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SaveBinaryFile_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SaveBinaryFile_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveBinaryFile_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveBinaryFile_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Request__get_type_hash,
  &file_server2__srv__SaveBinaryFile_Request__get_type_description,
  &file_server2__srv__SaveBinaryFile_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace file_server2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Request>()
{
  return &::file_server2::srv::rosidl_typesupport_cpp::SaveBinaryFile_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, file_server2, srv, SaveBinaryFile_Request)() {
  return get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__functions.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveBinaryFile_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveBinaryFile_Response_type_support_ids_t;

static const _SaveBinaryFile_Response_type_support_ids_t _SaveBinaryFile_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveBinaryFile_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveBinaryFile_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveBinaryFile_Response_type_support_symbol_names_t _SaveBinaryFile_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, file_server2, srv, SaveBinaryFile_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, file_server2, srv, SaveBinaryFile_Response)),
  }
};

typedef struct _SaveBinaryFile_Response_type_support_data_t
{
  void * data[2];
} _SaveBinaryFile_Response_type_support_data_t;

static _SaveBinaryFile_Response_type_support_data_t _SaveBinaryFile_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveBinaryFile_Response_message_typesupport_map = {
  2,
  "file_server2",
  &_SaveBinaryFile_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SaveBinaryFile_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SaveBinaryFile_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveBinaryFile_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveBinaryFile_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Response__get_type_hash,
  &file_server2__srv__SaveBinaryFile_Response__get_type_description,
  &file_server2__srv__SaveBinaryFile_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace file_server2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Response>()
{
  return &::file_server2::srv::rosidl_typesupport_cpp::SaveBinaryFile_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, file_server2, srv, SaveBinaryFile_Response)() {
  return get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__functions.h"
// already included above
// #include "file_server2/srv/detail/save_binary_file__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveBinaryFile_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveBinaryFile_Event_type_support_ids_t;

static const _SaveBinaryFile_Event_type_support_ids_t _SaveBinaryFile_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveBinaryFile_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveBinaryFile_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveBinaryFile_Event_type_support_symbol_names_t _SaveBinaryFile_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, file_server2, srv, SaveBinaryFile_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, file_server2, srv, SaveBinaryFile_Event)),
  }
};

typedef struct _SaveBinaryFile_Event_type_support_data_t
{
  void * data[2];
} _SaveBinaryFile_Event_type_support_data_t;

static _SaveBinaryFile_Event_type_support_data_t _SaveBinaryFile_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveBinaryFile_Event_message_typesupport_map = {
  2,
  "file_server2",
  &_SaveBinaryFile_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SaveBinaryFile_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SaveBinaryFile_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SaveBinaryFile_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveBinaryFile_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &file_server2__srv__SaveBinaryFile_Event__get_type_hash,
  &file_server2__srv__SaveBinaryFile_Event__get_type_description,
  &file_server2__srv__SaveBinaryFile_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace file_server2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Event>()
{
  return &::file_server2::srv::rosidl_typesupport_cpp::SaveBinaryFile_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, file_server2, srv, SaveBinaryFile_Event)() {
  return get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "file_server2/srv/detail/save_binary_file__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace file_server2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SaveBinaryFile_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SaveBinaryFile_type_support_ids_t;

static const _SaveBinaryFile_type_support_ids_t _SaveBinaryFile_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SaveBinaryFile_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SaveBinaryFile_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SaveBinaryFile_type_support_symbol_names_t _SaveBinaryFile_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, file_server2, srv, SaveBinaryFile)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, file_server2, srv, SaveBinaryFile)),
  }
};

typedef struct _SaveBinaryFile_type_support_data_t
{
  void * data[2];
} _SaveBinaryFile_type_support_data_t;

static _SaveBinaryFile_type_support_data_t _SaveBinaryFile_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SaveBinaryFile_service_typesupport_map = {
  2,
  "file_server2",
  &_SaveBinaryFile_service_typesupport_ids.typesupport_identifier[0],
  &_SaveBinaryFile_service_typesupport_symbol_names.symbol_name[0],
  &_SaveBinaryFile_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SaveBinaryFile_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SaveBinaryFile_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<file_server2::srv::SaveBinaryFile_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<file_server2::srv::SaveBinaryFile>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<file_server2::srv::SaveBinaryFile>,
  &file_server2__srv__SaveBinaryFile__get_type_hash,
  &file_server2__srv__SaveBinaryFile__get_type_description,
  &file_server2__srv__SaveBinaryFile__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace file_server2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<file_server2::srv::SaveBinaryFile>()
{
  return &::file_server2::srv::rosidl_typesupport_cpp::SaveBinaryFile_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, file_server2, srv, SaveBinaryFile)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<file_server2::srv::SaveBinaryFile>();
}

#ifdef __cplusplus
}
#endif

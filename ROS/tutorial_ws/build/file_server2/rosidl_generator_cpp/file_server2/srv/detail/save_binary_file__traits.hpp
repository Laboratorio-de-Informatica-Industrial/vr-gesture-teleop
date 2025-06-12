// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from file_server2:srv/SaveBinaryFile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "file_server2/srv/save_binary_file.hpp"


#ifndef FILE_SERVER2__SRV__DETAIL__SAVE_BINARY_FILE__TRAITS_HPP_
#define FILE_SERVER2__SRV__DETAIL__SAVE_BINARY_FILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "file_server2/srv/detail/save_binary_file__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace file_server2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveBinaryFile_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: value
  {
    if (msg.value.size() == 0) {
      out << "value: []";
    } else {
      out << "value: [";
      size_t pending_items = msg.value.size();
      for (auto item : msg.value) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveBinaryFile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value.size() == 0) {
      out << "value: []\n";
    } else {
      out << "value:\n";
      for (auto item : msg.value) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveBinaryFile_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace file_server2

namespace rosidl_generator_traits
{

[[deprecated("use file_server2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const file_server2::srv::SaveBinaryFile_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  file_server2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use file_server2::srv::to_yaml() instead")]]
inline std::string to_yaml(const file_server2::srv::SaveBinaryFile_Request & msg)
{
  return file_server2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<file_server2::srv::SaveBinaryFile_Request>()
{
  return "file_server2::srv::SaveBinaryFile_Request";
}

template<>
inline const char * name<file_server2::srv::SaveBinaryFile_Request>()
{
  return "file_server2/srv/SaveBinaryFile_Request";
}

template<>
struct has_fixed_size<file_server2::srv::SaveBinaryFile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<file_server2::srv::SaveBinaryFile_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<file_server2::srv::SaveBinaryFile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace file_server2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveBinaryFile_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveBinaryFile_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveBinaryFile_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace file_server2

namespace rosidl_generator_traits
{

[[deprecated("use file_server2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const file_server2::srv::SaveBinaryFile_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  file_server2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use file_server2::srv::to_yaml() instead")]]
inline std::string to_yaml(const file_server2::srv::SaveBinaryFile_Response & msg)
{
  return file_server2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<file_server2::srv::SaveBinaryFile_Response>()
{
  return "file_server2::srv::SaveBinaryFile_Response";
}

template<>
inline const char * name<file_server2::srv::SaveBinaryFile_Response>()
{
  return "file_server2/srv/SaveBinaryFile_Response";
}

template<>
struct has_fixed_size<file_server2::srv::SaveBinaryFile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<file_server2::srv::SaveBinaryFile_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<file_server2::srv::SaveBinaryFile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace file_server2
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveBinaryFile_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveBinaryFile_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveBinaryFile_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace file_server2

namespace rosidl_generator_traits
{

[[deprecated("use file_server2::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const file_server2::srv::SaveBinaryFile_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  file_server2::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use file_server2::srv::to_yaml() instead")]]
inline std::string to_yaml(const file_server2::srv::SaveBinaryFile_Event & msg)
{
  return file_server2::srv::to_yaml(msg);
}

template<>
inline const char * data_type<file_server2::srv::SaveBinaryFile_Event>()
{
  return "file_server2::srv::SaveBinaryFile_Event";
}

template<>
inline const char * name<file_server2::srv::SaveBinaryFile_Event>()
{
  return "file_server2/srv/SaveBinaryFile_Event";
}

template<>
struct has_fixed_size<file_server2::srv::SaveBinaryFile_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<file_server2::srv::SaveBinaryFile_Event>
  : std::integral_constant<bool, has_bounded_size<file_server2::srv::SaveBinaryFile_Request>::value && has_bounded_size<file_server2::srv::SaveBinaryFile_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<file_server2::srv::SaveBinaryFile_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<file_server2::srv::SaveBinaryFile>()
{
  return "file_server2::srv::SaveBinaryFile";
}

template<>
inline const char * name<file_server2::srv::SaveBinaryFile>()
{
  return "file_server2/srv/SaveBinaryFile";
}

template<>
struct has_fixed_size<file_server2::srv::SaveBinaryFile>
  : std::integral_constant<
    bool,
    has_fixed_size<file_server2::srv::SaveBinaryFile_Request>::value &&
    has_fixed_size<file_server2::srv::SaveBinaryFile_Response>::value
  >
{
};

template<>
struct has_bounded_size<file_server2::srv::SaveBinaryFile>
  : std::integral_constant<
    bool,
    has_bounded_size<file_server2::srv::SaveBinaryFile_Request>::value &&
    has_bounded_size<file_server2::srv::SaveBinaryFile_Response>::value
  >
{
};

template<>
struct is_service<file_server2::srv::SaveBinaryFile>
  : std::true_type
{
};

template<>
struct is_service_request<file_server2::srv::SaveBinaryFile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<file_server2::srv::SaveBinaryFile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FILE_SERVER2__SRV__DETAIL__SAVE_BINARY_FILE__TRAITS_HPP_

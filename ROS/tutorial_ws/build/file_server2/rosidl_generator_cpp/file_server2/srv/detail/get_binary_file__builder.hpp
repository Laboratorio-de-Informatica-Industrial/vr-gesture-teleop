// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from file_server2:srv/GetBinaryFile.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "file_server2/srv/get_binary_file.hpp"


#ifndef FILE_SERVER2__SRV__DETAIL__GET_BINARY_FILE__BUILDER_HPP_
#define FILE_SERVER2__SRV__DETAIL__GET_BINARY_FILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "file_server2/srv/detail/get_binary_file__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace file_server2
{

namespace srv
{

namespace builder
{

class Init_GetBinaryFile_Request_name
{
public:
  Init_GetBinaryFile_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::file_server2::srv::GetBinaryFile_Request name(::file_server2::srv::GetBinaryFile_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::file_server2::srv::GetBinaryFile_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::file_server2::srv::GetBinaryFile_Request>()
{
  return file_server2::srv::builder::Init_GetBinaryFile_Request_name();
}

}  // namespace file_server2


namespace file_server2
{

namespace srv
{

namespace builder
{

class Init_GetBinaryFile_Response_value
{
public:
  Init_GetBinaryFile_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::file_server2::srv::GetBinaryFile_Response value(::file_server2::srv::GetBinaryFile_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::file_server2::srv::GetBinaryFile_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::file_server2::srv::GetBinaryFile_Response>()
{
  return file_server2::srv::builder::Init_GetBinaryFile_Response_value();
}

}  // namespace file_server2


namespace file_server2
{

namespace srv
{

namespace builder
{

class Init_GetBinaryFile_Event_response
{
public:
  explicit Init_GetBinaryFile_Event_response(::file_server2::srv::GetBinaryFile_Event & msg)
  : msg_(msg)
  {}
  ::file_server2::srv::GetBinaryFile_Event response(::file_server2::srv::GetBinaryFile_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::file_server2::srv::GetBinaryFile_Event msg_;
};

class Init_GetBinaryFile_Event_request
{
public:
  explicit Init_GetBinaryFile_Event_request(::file_server2::srv::GetBinaryFile_Event & msg)
  : msg_(msg)
  {}
  Init_GetBinaryFile_Event_response request(::file_server2::srv::GetBinaryFile_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetBinaryFile_Event_response(msg_);
  }

private:
  ::file_server2::srv::GetBinaryFile_Event msg_;
};

class Init_GetBinaryFile_Event_info
{
public:
  Init_GetBinaryFile_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBinaryFile_Event_request info(::file_server2::srv::GetBinaryFile_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetBinaryFile_Event_request(msg_);
  }

private:
  ::file_server2::srv::GetBinaryFile_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::file_server2::srv::GetBinaryFile_Event>()
{
  return file_server2::srv::builder::Init_GetBinaryFile_Event_info();
}

}  // namespace file_server2

#endif  // FILE_SERVER2__SRV__DETAIL__GET_BINARY_FILE__BUILDER_HPP_

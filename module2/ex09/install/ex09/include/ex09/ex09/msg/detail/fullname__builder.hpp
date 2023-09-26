// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ex09:msg/Fullname.idl
// generated code does not contain a copyright notice

#ifndef EX09__MSG__DETAIL__FULLNAME__BUILDER_HPP_
#define EX09__MSG__DETAIL__FULLNAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ex09/msg/detail/fullname__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ex09
{

namespace msg
{

namespace builder
{

class Init_Fullname_first_name
{
public:
  explicit Init_Fullname_first_name(::ex09::msg::Fullname & msg)
  : msg_(msg)
  {}
  ::ex09::msg::Fullname first_name(::ex09::msg::Fullname::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ex09::msg::Fullname msg_;
};

class Init_Fullname_name
{
public:
  explicit Init_Fullname_name(::ex09::msg::Fullname & msg)
  : msg_(msg)
  {}
  Init_Fullname_first_name name(::ex09::msg::Fullname::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Fullname_first_name(msg_);
  }

private:
  ::ex09::msg::Fullname msg_;
};

class Init_Fullname_last_name
{
public:
  Init_Fullname_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Fullname_name last_name(::ex09::msg::Fullname::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_Fullname_name(msg_);
  }

private:
  ::ex09::msg::Fullname msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ex09::msg::Fullname>()
{
  return ex09::msg::builder::Init_Fullname_last_name();
}

}  // namespace ex09

#endif  // EX09__MSG__DETAIL__FULLNAME__BUILDER_HPP_

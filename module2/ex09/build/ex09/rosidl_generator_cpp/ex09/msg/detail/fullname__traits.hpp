// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ex09:msg/Fullname.idl
// generated code does not contain a copyright notice

#ifndef EX09__MSG__DETAIL__FULLNAME__TRAITS_HPP_
#define EX09__MSG__DETAIL__FULLNAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ex09/msg/detail/fullname__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ex09
{

namespace msg
{

inline void to_flow_style_yaml(
  const Fullname & msg,
  std::ostream & out)
{
  out << "{";
  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Fullname & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fullname & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ex09

namespace rosidl_generator_traits
{

[[deprecated("use ex09::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ex09::msg::Fullname & msg,
  std::ostream & out, size_t indentation = 0)
{
  ex09::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ex09::msg::to_yaml() instead")]]
inline std::string to_yaml(const ex09::msg::Fullname & msg)
{
  return ex09::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ex09::msg::Fullname>()
{
  return "ex09::msg::Fullname";
}

template<>
inline const char * name<ex09::msg::Fullname>()
{
  return "ex09/msg/Fullname";
}

template<>
struct has_fixed_size<ex09::msg::Fullname>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ex09::msg::Fullname>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ex09::msg::Fullname>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EX09__MSG__DETAIL__FULLNAME__TRAITS_HPP_

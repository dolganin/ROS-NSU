// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ex09:srv/Fullnamesum.idl
// generated code does not contain a copyright notice

#ifndef EX09__SRV__DETAIL__FULLNAMESUM__TRAITS_HPP_
#define EX09__SRV__DETAIL__FULLNAMESUM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ex09/srv/detail/fullnamesum__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ex09
{

namespace srv
{

inline void to_flow_style_yaml(
  const Fullnamesum_Request & msg,
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
  const Fullnamesum_Request & msg,
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

inline std::string to_yaml(const Fullnamesum_Request & msg, bool use_flow_style = false)
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

}  // namespace ex09

namespace rosidl_generator_traits
{

[[deprecated("use ex09::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ex09::srv::Fullnamesum_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ex09::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ex09::srv::to_yaml() instead")]]
inline std::string to_yaml(const ex09::srv::Fullnamesum_Request & msg)
{
  return ex09::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ex09::srv::Fullnamesum_Request>()
{
  return "ex09::srv::Fullnamesum_Request";
}

template<>
inline const char * name<ex09::srv::Fullnamesum_Request>()
{
  return "ex09/srv/Fullnamesum_Request";
}

template<>
struct has_fixed_size<ex09::srv::Fullnamesum_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ex09::srv::Fullnamesum_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ex09::srv::Fullnamesum_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ex09
{

namespace srv
{

inline void to_flow_style_yaml(
  const Fullnamesum_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: full_name
  {
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Fullnamesum_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: full_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_name: ";
    rosidl_generator_traits::value_to_yaml(msg.full_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Fullnamesum_Response & msg, bool use_flow_style = false)
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

}  // namespace ex09

namespace rosidl_generator_traits
{

[[deprecated("use ex09::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ex09::srv::Fullnamesum_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ex09::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ex09::srv::to_yaml() instead")]]
inline std::string to_yaml(const ex09::srv::Fullnamesum_Response & msg)
{
  return ex09::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ex09::srv::Fullnamesum_Response>()
{
  return "ex09::srv::Fullnamesum_Response";
}

template<>
inline const char * name<ex09::srv::Fullnamesum_Response>()
{
  return "ex09/srv/Fullnamesum_Response";
}

template<>
struct has_fixed_size<ex09::srv::Fullnamesum_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ex09::srv::Fullnamesum_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ex09::srv::Fullnamesum_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ex09::srv::Fullnamesum>()
{
  return "ex09::srv::Fullnamesum";
}

template<>
inline const char * name<ex09::srv::Fullnamesum>()
{
  return "ex09/srv/Fullnamesum";
}

template<>
struct has_fixed_size<ex09::srv::Fullnamesum>
  : std::integral_constant<
    bool,
    has_fixed_size<ex09::srv::Fullnamesum_Request>::value &&
    has_fixed_size<ex09::srv::Fullnamesum_Response>::value
  >
{
};

template<>
struct has_bounded_size<ex09::srv::Fullnamesum>
  : std::integral_constant<
    bool,
    has_bounded_size<ex09::srv::Fullnamesum_Request>::value &&
    has_bounded_size<ex09::srv::Fullnamesum_Response>::value
  >
{
};

template<>
struct is_service<ex09::srv::Fullnamesum>
  : std::true_type
{
};

template<>
struct is_service_request<ex09::srv::Fullnamesum_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ex09::srv::Fullnamesum_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EX09__SRV__DETAIL__FULLNAMESUM__TRAITS_HPP_

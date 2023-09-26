// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ex09:msg/Fullname.idl
// generated code does not contain a copyright notice

#ifndef EX09__MSG__DETAIL__FULLNAME__STRUCT_HPP_
#define EX09__MSG__DETAIL__FULLNAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ex09__msg__Fullname __attribute__((deprecated))
#else
# define DEPRECATED__ex09__msg__Fullname __declspec(deprecated)
#endif

namespace ex09
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Fullname_
{
  using Type = Fullname_<ContainerAllocator>;

  explicit Fullname_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_name = "";
      this->name = "";
      this->first_name = "";
    }
  }

  explicit Fullname_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_name(_alloc),
    name(_alloc),
    first_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_name = "";
      this->name = "";
      this->first_name = "";
    }
  }

  // field types and members
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_name_type last_name;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_name_type first_name;

  // setters for named parameter idiom
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ex09::msg::Fullname_<ContainerAllocator> *;
  using ConstRawPtr =
    const ex09::msg::Fullname_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ex09::msg::Fullname_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ex09::msg::Fullname_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ex09::msg::Fullname_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ex09::msg::Fullname_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ex09::msg::Fullname_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ex09::msg::Fullname_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ex09::msg::Fullname_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ex09::msg::Fullname_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ex09__msg__Fullname
    std::shared_ptr<ex09::msg::Fullname_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ex09__msg__Fullname
    std::shared_ptr<ex09::msg::Fullname_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fullname_ & other) const
  {
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->first_name != other.first_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fullname_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fullname_

// alias to use template instance with default allocator
using Fullname =
  ex09::msg::Fullname_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ex09

#endif  // EX09__MSG__DETAIL__FULLNAME__STRUCT_HPP_

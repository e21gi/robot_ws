// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interface:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define TEST_INTERFACE__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include "test_interface/msg/detail/sphere__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interface
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::test_interface::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::test_interface::msg::Sphere radius(::test_interface::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interface::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::test_interface::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::test_interface::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interface::msg::Sphere>()
{
  return test_interface::msg::builder::Init_Sphere_center();
}

}  // namespace test_interface

#endif  // TEST_INTERFACE__MSG__DETAIL__SPHERE__BUILDER_HPP_

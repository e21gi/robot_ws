// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
#define TEST_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_

#include "test_interface/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interface
{

namespace msg
{

namespace builder
{

class Init_Num_sum
{
public:
  explicit Init_Num_sum(::test_interface::msg::Num & msg)
  : msg_(msg)
  {}
  ::test_interface::msg::Num sum(::test_interface::msg::Num::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interface::msg::Num msg_;
};

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_sum num(::test_interface::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Num_sum(msg_);
  }

private:
  ::test_interface::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interface::msg::Num>()
{
  return test_interface::msg::builder::Init_Num_num();
}

}  // namespace test_interface

#endif  // TEST_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_

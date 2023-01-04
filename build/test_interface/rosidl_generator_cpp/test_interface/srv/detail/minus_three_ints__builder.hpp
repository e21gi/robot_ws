// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interface:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__BUILDER_HPP_
#define TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__BUILDER_HPP_

#include "test_interface/srv/detail/minus_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interface
{

namespace srv
{

namespace builder
{

class Init_MinusThreeInts_Request_c
{
public:
  explicit Init_MinusThreeInts_Request_c(::test_interface::srv::MinusThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::test_interface::srv::MinusThreeInts_Request c(::test_interface::srv::MinusThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interface::srv::MinusThreeInts_Request msg_;
};

class Init_MinusThreeInts_Request_b
{
public:
  explicit Init_MinusThreeInts_Request_b(::test_interface::srv::MinusThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_MinusThreeInts_Request_c b(::test_interface::srv::MinusThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_MinusThreeInts_Request_c(msg_);
  }

private:
  ::test_interface::srv::MinusThreeInts_Request msg_;
};

class Init_MinusThreeInts_Request_a
{
public:
  Init_MinusThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MinusThreeInts_Request_b a(::test_interface::srv::MinusThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MinusThreeInts_Request_b(msg_);
  }

private:
  ::test_interface::srv::MinusThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interface::srv::MinusThreeInts_Request>()
{
  return test_interface::srv::builder::Init_MinusThreeInts_Request_a();
}

}  // namespace test_interface


namespace test_interface
{

namespace srv
{

namespace builder
{

class Init_MinusThreeInts_Response_sum
{
public:
  Init_MinusThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::test_interface::srv::MinusThreeInts_Response sum(::test_interface::srv::MinusThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interface::srv::MinusThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interface::srv::MinusThreeInts_Response>()
{
  return test_interface::srv::builder::Init_MinusThreeInts_Response_sum();
}

}  // namespace test_interface

#endif  // TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__BUILDER_HPP_

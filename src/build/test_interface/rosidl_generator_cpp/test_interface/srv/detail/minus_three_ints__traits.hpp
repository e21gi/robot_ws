// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interface:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__TRAITS_HPP_
#define TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__TRAITS_HPP_

#include "test_interface/srv/detail/minus_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::srv::MinusThreeInts_Request>()
{
  return "test_interface::srv::MinusThreeInts_Request";
}

template<>
inline const char * name<test_interface::srv::MinusThreeInts_Request>()
{
  return "test_interface/srv/MinusThreeInts_Request";
}

template<>
struct has_fixed_size<test_interface::srv::MinusThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_interface::srv::MinusThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_interface::srv::MinusThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::srv::MinusThreeInts_Response>()
{
  return "test_interface::srv::MinusThreeInts_Response";
}

template<>
inline const char * name<test_interface::srv::MinusThreeInts_Response>()
{
  return "test_interface/srv/MinusThreeInts_Response";
}

template<>
struct has_fixed_size<test_interface::srv::MinusThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_interface::srv::MinusThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_interface::srv::MinusThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::srv::MinusThreeInts>()
{
  return "test_interface::srv::MinusThreeInts";
}

template<>
inline const char * name<test_interface::srv::MinusThreeInts>()
{
  return "test_interface/srv/MinusThreeInts";
}

template<>
struct has_fixed_size<test_interface::srv::MinusThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<test_interface::srv::MinusThreeInts_Request>::value &&
    has_fixed_size<test_interface::srv::MinusThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_interface::srv::MinusThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<test_interface::srv::MinusThreeInts_Request>::value &&
    has_bounded_size<test_interface::srv::MinusThreeInts_Response>::value
  >
{
};

template<>
struct is_service<test_interface::srv::MinusThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<test_interface::srv::MinusThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_interface::srv::MinusThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__TRAITS_HPP_

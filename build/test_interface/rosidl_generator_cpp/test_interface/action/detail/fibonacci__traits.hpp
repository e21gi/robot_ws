// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_interface:action/Fibonacci.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_
#define TEST_INTERFACE__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_

#include "test_interface/action/detail/fibonacci__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_Goal>()
{
  return "test_interface::action::Fibonacci_Goal";
}

template<>
inline const char * name<test_interface::action::Fibonacci_Goal>()
{
  return "test_interface/action/Fibonacci_Goal";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_interface::action::Fibonacci_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_Result>()
{
  return "test_interface::action::Fibonacci_Result";
}

template<>
inline const char * name<test_interface::action::Fibonacci_Result>()
{
  return "test_interface/action/Fibonacci_Result";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_interface::action::Fibonacci_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_Feedback>()
{
  return "test_interface::action::Fibonacci_Feedback";
}

template<>
inline const char * name<test_interface::action::Fibonacci_Feedback>()
{
  return "test_interface/action/Fibonacci_Feedback";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<test_interface::action::Fibonacci_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "test_interface/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_SendGoal_Request>()
{
  return "test_interface::action::Fibonacci_SendGoal_Request";
}

template<>
inline const char * name<test_interface::action::Fibonacci_SendGoal_Request>()
{
  return "test_interface/action/Fibonacci_SendGoal_Request";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<test_interface::action::Fibonacci_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<test_interface::action::Fibonacci_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<test_interface::action::Fibonacci_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_SendGoal_Response>()
{
  return "test_interface::action::Fibonacci_SendGoal_Response";
}

template<>
inline const char * name<test_interface::action::Fibonacci_SendGoal_Response>()
{
  return "test_interface/action/Fibonacci_SendGoal_Response";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<test_interface::action::Fibonacci_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_SendGoal>()
{
  return "test_interface::action::Fibonacci_SendGoal";
}

template<>
inline const char * name<test_interface::action::Fibonacci_SendGoal>()
{
  return "test_interface/action/Fibonacci_SendGoal";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<test_interface::action::Fibonacci_SendGoal_Request>::value &&
    has_fixed_size<test_interface::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<test_interface::action::Fibonacci_SendGoal_Request>::value &&
    has_bounded_size<test_interface::action::Fibonacci_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<test_interface::action::Fibonacci_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<test_interface::action::Fibonacci_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_interface::action::Fibonacci_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_GetResult_Request>()
{
  return "test_interface::action::Fibonacci_GetResult_Request";
}

template<>
inline const char * name<test_interface::action::Fibonacci_GetResult_Request>()
{
  return "test_interface/action/Fibonacci_GetResult_Request";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<test_interface::action::Fibonacci_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "test_interface/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_GetResult_Response>()
{
  return "test_interface::action::Fibonacci_GetResult_Response";
}

template<>
inline const char * name<test_interface::action::Fibonacci_GetResult_Response>()
{
  return "test_interface/action/Fibonacci_GetResult_Response";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<test_interface::action::Fibonacci_Result>::value> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<test_interface::action::Fibonacci_Result>::value> {};

template<>
struct is_message<test_interface::action::Fibonacci_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_GetResult>()
{
  return "test_interface::action::Fibonacci_GetResult";
}

template<>
inline const char * name<test_interface::action::Fibonacci_GetResult>()
{
  return "test_interface/action/Fibonacci_GetResult";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<test_interface::action::Fibonacci_GetResult_Request>::value &&
    has_fixed_size<test_interface::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<test_interface::action::Fibonacci_GetResult_Request>::value &&
    has_bounded_size<test_interface::action::Fibonacci_GetResult_Response>::value
  >
{
};

template<>
struct is_service<test_interface::action::Fibonacci_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<test_interface::action::Fibonacci_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_interface::action::Fibonacci_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "test_interface/action/detail/fibonacci__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_interface::action::Fibonacci_FeedbackMessage>()
{
  return "test_interface::action::Fibonacci_FeedbackMessage";
}

template<>
inline const char * name<test_interface::action::Fibonacci_FeedbackMessage>()
{
  return "test_interface/action/Fibonacci_FeedbackMessage";
}

template<>
struct has_fixed_size<test_interface::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<test_interface::action::Fibonacci_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<test_interface::action::Fibonacci_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<test_interface::action::Fibonacci_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<test_interface::action::Fibonacci_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<test_interface::action::Fibonacci>
  : std::true_type
{
};

template<>
struct is_action_goal<test_interface::action::Fibonacci_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<test_interface::action::Fibonacci_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<test_interface::action::Fibonacci_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TEST_INTERFACE__ACTION__DETAIL__FIBONACCI__TRAITS_HPP_

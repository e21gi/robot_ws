// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interface:srv/MinusThreeInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_H_
#define TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/MinusThreeInts in the package test_interface.
typedef struct test_interface__srv__MinusThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} test_interface__srv__MinusThreeInts_Request;

// Struct for a sequence of test_interface__srv__MinusThreeInts_Request.
typedef struct test_interface__srv__MinusThreeInts_Request__Sequence
{
  test_interface__srv__MinusThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interface__srv__MinusThreeInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MinusThreeInts in the package test_interface.
typedef struct test_interface__srv__MinusThreeInts_Response
{
  int64_t sum;
} test_interface__srv__MinusThreeInts_Response;

// Struct for a sequence of test_interface__srv__MinusThreeInts_Response.
typedef struct test_interface__srv__MinusThreeInts_Response__Sequence
{
  test_interface__srv__MinusThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interface__srv__MinusThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACE__SRV__DETAIL__MINUS_THREE_INTS__STRUCT_H_

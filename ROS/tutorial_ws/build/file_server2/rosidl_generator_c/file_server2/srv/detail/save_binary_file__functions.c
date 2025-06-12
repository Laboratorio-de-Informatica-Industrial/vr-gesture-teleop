// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from file_server2:srv/SaveBinaryFile.idl
// generated code does not contain a copyright notice
#include "file_server2/srv/detail/save_binary_file__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
file_server2__srv__SaveBinaryFile_Request__init(file_server2__srv__SaveBinaryFile_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    file_server2__srv__SaveBinaryFile_Request__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->value, 0)) {
    file_server2__srv__SaveBinaryFile_Request__fini(msg);
    return false;
  }
  return true;
}

void
file_server2__srv__SaveBinaryFile_Request__fini(file_server2__srv__SaveBinaryFile_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
  rosidl_runtime_c__uint8__Sequence__fini(&msg->value);
}

bool
file_server2__srv__SaveBinaryFile_Request__are_equal(const file_server2__srv__SaveBinaryFile_Request * lhs, const file_server2__srv__SaveBinaryFile_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
file_server2__srv__SaveBinaryFile_Request__copy(
  const file_server2__srv__SaveBinaryFile_Request * input,
  file_server2__srv__SaveBinaryFile_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

file_server2__srv__SaveBinaryFile_Request *
file_server2__srv__SaveBinaryFile_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Request * msg = (file_server2__srv__SaveBinaryFile_Request *)allocator.allocate(sizeof(file_server2__srv__SaveBinaryFile_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(file_server2__srv__SaveBinaryFile_Request));
  bool success = file_server2__srv__SaveBinaryFile_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
file_server2__srv__SaveBinaryFile_Request__destroy(file_server2__srv__SaveBinaryFile_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    file_server2__srv__SaveBinaryFile_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
file_server2__srv__SaveBinaryFile_Request__Sequence__init(file_server2__srv__SaveBinaryFile_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Request * data = NULL;

  if (size) {
    data = (file_server2__srv__SaveBinaryFile_Request *)allocator.zero_allocate(size, sizeof(file_server2__srv__SaveBinaryFile_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = file_server2__srv__SaveBinaryFile_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        file_server2__srv__SaveBinaryFile_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
file_server2__srv__SaveBinaryFile_Request__Sequence__fini(file_server2__srv__SaveBinaryFile_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      file_server2__srv__SaveBinaryFile_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

file_server2__srv__SaveBinaryFile_Request__Sequence *
file_server2__srv__SaveBinaryFile_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Request__Sequence * array = (file_server2__srv__SaveBinaryFile_Request__Sequence *)allocator.allocate(sizeof(file_server2__srv__SaveBinaryFile_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = file_server2__srv__SaveBinaryFile_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
file_server2__srv__SaveBinaryFile_Request__Sequence__destroy(file_server2__srv__SaveBinaryFile_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    file_server2__srv__SaveBinaryFile_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
file_server2__srv__SaveBinaryFile_Request__Sequence__are_equal(const file_server2__srv__SaveBinaryFile_Request__Sequence * lhs, const file_server2__srv__SaveBinaryFile_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!file_server2__srv__SaveBinaryFile_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
file_server2__srv__SaveBinaryFile_Request__Sequence__copy(
  const file_server2__srv__SaveBinaryFile_Request__Sequence * input,
  file_server2__srv__SaveBinaryFile_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(file_server2__srv__SaveBinaryFile_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    file_server2__srv__SaveBinaryFile_Request * data =
      (file_server2__srv__SaveBinaryFile_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!file_server2__srv__SaveBinaryFile_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          file_server2__srv__SaveBinaryFile_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!file_server2__srv__SaveBinaryFile_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
file_server2__srv__SaveBinaryFile_Response__init(file_server2__srv__SaveBinaryFile_Response * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    file_server2__srv__SaveBinaryFile_Response__fini(msg);
    return false;
  }
  return true;
}

void
file_server2__srv__SaveBinaryFile_Response__fini(file_server2__srv__SaveBinaryFile_Response * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
file_server2__srv__SaveBinaryFile_Response__are_equal(const file_server2__srv__SaveBinaryFile_Response * lhs, const file_server2__srv__SaveBinaryFile_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
file_server2__srv__SaveBinaryFile_Response__copy(
  const file_server2__srv__SaveBinaryFile_Response * input,
  file_server2__srv__SaveBinaryFile_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

file_server2__srv__SaveBinaryFile_Response *
file_server2__srv__SaveBinaryFile_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Response * msg = (file_server2__srv__SaveBinaryFile_Response *)allocator.allocate(sizeof(file_server2__srv__SaveBinaryFile_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(file_server2__srv__SaveBinaryFile_Response));
  bool success = file_server2__srv__SaveBinaryFile_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
file_server2__srv__SaveBinaryFile_Response__destroy(file_server2__srv__SaveBinaryFile_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    file_server2__srv__SaveBinaryFile_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
file_server2__srv__SaveBinaryFile_Response__Sequence__init(file_server2__srv__SaveBinaryFile_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Response * data = NULL;

  if (size) {
    data = (file_server2__srv__SaveBinaryFile_Response *)allocator.zero_allocate(size, sizeof(file_server2__srv__SaveBinaryFile_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = file_server2__srv__SaveBinaryFile_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        file_server2__srv__SaveBinaryFile_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
file_server2__srv__SaveBinaryFile_Response__Sequence__fini(file_server2__srv__SaveBinaryFile_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      file_server2__srv__SaveBinaryFile_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

file_server2__srv__SaveBinaryFile_Response__Sequence *
file_server2__srv__SaveBinaryFile_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Response__Sequence * array = (file_server2__srv__SaveBinaryFile_Response__Sequence *)allocator.allocate(sizeof(file_server2__srv__SaveBinaryFile_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = file_server2__srv__SaveBinaryFile_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
file_server2__srv__SaveBinaryFile_Response__Sequence__destroy(file_server2__srv__SaveBinaryFile_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    file_server2__srv__SaveBinaryFile_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
file_server2__srv__SaveBinaryFile_Response__Sequence__are_equal(const file_server2__srv__SaveBinaryFile_Response__Sequence * lhs, const file_server2__srv__SaveBinaryFile_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!file_server2__srv__SaveBinaryFile_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
file_server2__srv__SaveBinaryFile_Response__Sequence__copy(
  const file_server2__srv__SaveBinaryFile_Response__Sequence * input,
  file_server2__srv__SaveBinaryFile_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(file_server2__srv__SaveBinaryFile_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    file_server2__srv__SaveBinaryFile_Response * data =
      (file_server2__srv__SaveBinaryFile_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!file_server2__srv__SaveBinaryFile_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          file_server2__srv__SaveBinaryFile_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!file_server2__srv__SaveBinaryFile_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "file_server2/srv/detail/save_binary_file__functions.h"

bool
file_server2__srv__SaveBinaryFile_Event__init(file_server2__srv__SaveBinaryFile_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    file_server2__srv__SaveBinaryFile_Event__fini(msg);
    return false;
  }
  // request
  if (!file_server2__srv__SaveBinaryFile_Request__Sequence__init(&msg->request, 0)) {
    file_server2__srv__SaveBinaryFile_Event__fini(msg);
    return false;
  }
  // response
  if (!file_server2__srv__SaveBinaryFile_Response__Sequence__init(&msg->response, 0)) {
    file_server2__srv__SaveBinaryFile_Event__fini(msg);
    return false;
  }
  return true;
}

void
file_server2__srv__SaveBinaryFile_Event__fini(file_server2__srv__SaveBinaryFile_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  file_server2__srv__SaveBinaryFile_Request__Sequence__fini(&msg->request);
  // response
  file_server2__srv__SaveBinaryFile_Response__Sequence__fini(&msg->response);
}

bool
file_server2__srv__SaveBinaryFile_Event__are_equal(const file_server2__srv__SaveBinaryFile_Event * lhs, const file_server2__srv__SaveBinaryFile_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!file_server2__srv__SaveBinaryFile_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!file_server2__srv__SaveBinaryFile_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
file_server2__srv__SaveBinaryFile_Event__copy(
  const file_server2__srv__SaveBinaryFile_Event * input,
  file_server2__srv__SaveBinaryFile_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!file_server2__srv__SaveBinaryFile_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!file_server2__srv__SaveBinaryFile_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

file_server2__srv__SaveBinaryFile_Event *
file_server2__srv__SaveBinaryFile_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Event * msg = (file_server2__srv__SaveBinaryFile_Event *)allocator.allocate(sizeof(file_server2__srv__SaveBinaryFile_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(file_server2__srv__SaveBinaryFile_Event));
  bool success = file_server2__srv__SaveBinaryFile_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
file_server2__srv__SaveBinaryFile_Event__destroy(file_server2__srv__SaveBinaryFile_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    file_server2__srv__SaveBinaryFile_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
file_server2__srv__SaveBinaryFile_Event__Sequence__init(file_server2__srv__SaveBinaryFile_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Event * data = NULL;

  if (size) {
    data = (file_server2__srv__SaveBinaryFile_Event *)allocator.zero_allocate(size, sizeof(file_server2__srv__SaveBinaryFile_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = file_server2__srv__SaveBinaryFile_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        file_server2__srv__SaveBinaryFile_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
file_server2__srv__SaveBinaryFile_Event__Sequence__fini(file_server2__srv__SaveBinaryFile_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      file_server2__srv__SaveBinaryFile_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

file_server2__srv__SaveBinaryFile_Event__Sequence *
file_server2__srv__SaveBinaryFile_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  file_server2__srv__SaveBinaryFile_Event__Sequence * array = (file_server2__srv__SaveBinaryFile_Event__Sequence *)allocator.allocate(sizeof(file_server2__srv__SaveBinaryFile_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = file_server2__srv__SaveBinaryFile_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
file_server2__srv__SaveBinaryFile_Event__Sequence__destroy(file_server2__srv__SaveBinaryFile_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    file_server2__srv__SaveBinaryFile_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
file_server2__srv__SaveBinaryFile_Event__Sequence__are_equal(const file_server2__srv__SaveBinaryFile_Event__Sequence * lhs, const file_server2__srv__SaveBinaryFile_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!file_server2__srv__SaveBinaryFile_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
file_server2__srv__SaveBinaryFile_Event__Sequence__copy(
  const file_server2__srv__SaveBinaryFile_Event__Sequence * input,
  file_server2__srv__SaveBinaryFile_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(file_server2__srv__SaveBinaryFile_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    file_server2__srv__SaveBinaryFile_Event * data =
      (file_server2__srv__SaveBinaryFile_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!file_server2__srv__SaveBinaryFile_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          file_server2__srv__SaveBinaryFile_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!file_server2__srv__SaveBinaryFile_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

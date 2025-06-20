// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from file_server2:srv/GetBinaryFile.idl
// generated code does not contain a copyright notice

#include "file_server2/srv/detail/get_binary_file__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__GetBinaryFile__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0xcf, 0xd7, 0x4a, 0x24, 0x7c, 0x9c, 0x57,
      0xbd, 0xbe, 0xb0, 0xa2, 0x7c, 0x4b, 0x8c, 0x18,
      0xd0, 0x49, 0xf2, 0xe7, 0xff, 0xc6, 0xb9, 0x99,
      0x78, 0x37, 0x65, 0xf5, 0xd9, 0xfd, 0x56, 0x03,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__GetBinaryFile_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0xaf, 0x82, 0xf5, 0x54, 0x62, 0x01, 0x02,
      0x19, 0x1b, 0x31, 0xd3, 0x8f, 0x34, 0xc7, 0xeb,
      0xf1, 0x9f, 0x77, 0x21, 0x7e, 0xe3, 0xac, 0x8c,
      0x4d, 0x09, 0x01, 0xc9, 0x58, 0xf5, 0x36, 0x41,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__GetBinaryFile_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1f, 0x51, 0xe1, 0xd0, 0x78, 0xff, 0xff, 0xda,
      0x9f, 0x19, 0x61, 0xa1, 0x5d, 0xdf, 0x82, 0x27,
      0xe7, 0xbc, 0x59, 0x06, 0x3a, 0x2c, 0x13, 0x68,
      0xf8, 0x1c, 0x10, 0x4c, 0x79, 0xad, 0xbd, 0xb9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__GetBinaryFile_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0xab, 0xa2, 0xc0, 0xc1, 0xe6, 0x40, 0x80,
      0xc8, 0x67, 0xe7, 0xeb, 0x2e, 0x6a, 0xbc, 0xa9,
      0x71, 0x10, 0xa9, 0x77, 0xab, 0xeb, 0x4d, 0x02,
      0x5a, 0x76, 0xf4, 0xec, 0xd6, 0x33, 0x33, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char file_server2__srv__GetBinaryFile__TYPE_NAME[] = "file_server2/srv/GetBinaryFile";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char file_server2__srv__GetBinaryFile_Event__TYPE_NAME[] = "file_server2/srv/GetBinaryFile_Event";
static char file_server2__srv__GetBinaryFile_Request__TYPE_NAME[] = "file_server2/srv/GetBinaryFile_Request";
static char file_server2__srv__GetBinaryFile_Response__TYPE_NAME[] = "file_server2/srv/GetBinaryFile_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char file_server2__srv__GetBinaryFile__FIELD_NAME__request_message[] = "request_message";
static char file_server2__srv__GetBinaryFile__FIELD_NAME__response_message[] = "response_message";
static char file_server2__srv__GetBinaryFile__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field file_server2__srv__GetBinaryFile__FIELDS[] = {
  {
    {file_server2__srv__GetBinaryFile__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {file_server2__srv__GetBinaryFile_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {file_server2__srv__GetBinaryFile_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {file_server2__srv__GetBinaryFile_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription file_server2__srv__GetBinaryFile__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
file_server2__srv__GetBinaryFile__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__GetBinaryFile__TYPE_NAME, 30, 30},
      {file_server2__srv__GetBinaryFile__FIELDS, 3, 3},
    },
    {file_server2__srv__GetBinaryFile__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = file_server2__srv__GetBinaryFile_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = file_server2__srv__GetBinaryFile_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = file_server2__srv__GetBinaryFile_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char file_server2__srv__GetBinaryFile_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field file_server2__srv__GetBinaryFile_Request__FIELDS[] = {
  {
    {file_server2__srv__GetBinaryFile_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
file_server2__srv__GetBinaryFile_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__GetBinaryFile_Request__TYPE_NAME, 38, 38},
      {file_server2__srv__GetBinaryFile_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char file_server2__srv__GetBinaryFile_Response__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field file_server2__srv__GetBinaryFile_Response__FIELDS[] = {
  {
    {file_server2__srv__GetBinaryFile_Response__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
file_server2__srv__GetBinaryFile_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__GetBinaryFile_Response__TYPE_NAME, 39, 39},
      {file_server2__srv__GetBinaryFile_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char file_server2__srv__GetBinaryFile_Event__FIELD_NAME__info[] = "info";
static char file_server2__srv__GetBinaryFile_Event__FIELD_NAME__request[] = "request";
static char file_server2__srv__GetBinaryFile_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field file_server2__srv__GetBinaryFile_Event__FIELDS[] = {
  {
    {file_server2__srv__GetBinaryFile_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {file_server2__srv__GetBinaryFile_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {file_server2__srv__GetBinaryFile_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription file_server2__srv__GetBinaryFile_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__GetBinaryFile_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
file_server2__srv__GetBinaryFile_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__GetBinaryFile_Event__TYPE_NAME, 36, 36},
      {file_server2__srv__GetBinaryFile_Event__FIELDS, 3, 3},
    },
    {file_server2__srv__GetBinaryFile_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = file_server2__srv__GetBinaryFile_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = file_server2__srv__GetBinaryFile_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "---\n"
  "uint8[] value\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__GetBinaryFile__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__GetBinaryFile__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__GetBinaryFile_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__GetBinaryFile_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__GetBinaryFile_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__GetBinaryFile_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__GetBinaryFile_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__GetBinaryFile_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__GetBinaryFile__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__GetBinaryFile__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *file_server2__srv__GetBinaryFile_Event__get_individual_type_description_source(NULL);
    sources[3] = *file_server2__srv__GetBinaryFile_Request__get_individual_type_description_source(NULL);
    sources[4] = *file_server2__srv__GetBinaryFile_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__GetBinaryFile_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__GetBinaryFile_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__GetBinaryFile_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__GetBinaryFile_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__GetBinaryFile_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__GetBinaryFile_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *file_server2__srv__GetBinaryFile_Request__get_individual_type_description_source(NULL);
    sources[3] = *file_server2__srv__GetBinaryFile_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

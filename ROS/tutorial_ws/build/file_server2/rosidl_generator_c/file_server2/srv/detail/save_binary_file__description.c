// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from file_server2:srv/SaveBinaryFile.idl
// generated code does not contain a copyright notice

#include "file_server2/srv/detail/save_binary_file__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__SaveBinaryFile__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x76, 0xdc, 0x20, 0x83, 0xab, 0xb2, 0x61,
      0x2b, 0x0d, 0xb3, 0x3a, 0x67, 0xee, 0x0e, 0x6f,
      0x58, 0xc9, 0xac, 0x6b, 0xde, 0x61, 0x68, 0x85,
      0x5b, 0x49, 0x3f, 0x23, 0xaf, 0x89, 0xd2, 0xbc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__SaveBinaryFile_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x9e, 0xd9, 0x19, 0x3f, 0x6a, 0xfe, 0x52,
      0x03, 0x26, 0x9e, 0xbf, 0x36, 0xfe, 0xfb, 0xa4,
      0x4e, 0xfe, 0xe7, 0x7b, 0x5c, 0x31, 0xd4, 0x67,
      0xca, 0x75, 0xad, 0x7f, 0xc5, 0xcf, 0xcd, 0x66,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__SaveBinaryFile_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xc6, 0x9f, 0xf4, 0x2d, 0x79, 0xef, 0x1a,
      0xba, 0xc1, 0x0b, 0x51, 0x86, 0x68, 0xb6, 0x55,
      0xff, 0xbd, 0x78, 0xc9, 0x39, 0x79, 0x9b, 0x40,
      0xf4, 0x1c, 0xb6, 0xb3, 0x39, 0xfb, 0x65, 0x74,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_file_server2
const rosidl_type_hash_t *
file_server2__srv__SaveBinaryFile_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0xf4, 0x8d, 0x80, 0x59, 0x91, 0x02, 0x52,
      0x93, 0x25, 0xf4, 0x93, 0x56, 0xc2, 0x95, 0xfa,
      0xb4, 0xf0, 0x52, 0xdf, 0x46, 0xc3, 0x57, 0x73,
      0xfe, 0x4b, 0x83, 0x0e, 0x54, 0x09, 0xba, 0x75,
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

static char file_server2__srv__SaveBinaryFile__TYPE_NAME[] = "file_server2/srv/SaveBinaryFile";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char file_server2__srv__SaveBinaryFile_Event__TYPE_NAME[] = "file_server2/srv/SaveBinaryFile_Event";
static char file_server2__srv__SaveBinaryFile_Request__TYPE_NAME[] = "file_server2/srv/SaveBinaryFile_Request";
static char file_server2__srv__SaveBinaryFile_Response__TYPE_NAME[] = "file_server2/srv/SaveBinaryFile_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char file_server2__srv__SaveBinaryFile__FIELD_NAME__request_message[] = "request_message";
static char file_server2__srv__SaveBinaryFile__FIELD_NAME__response_message[] = "response_message";
static char file_server2__srv__SaveBinaryFile__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field file_server2__srv__SaveBinaryFile__FIELDS[] = {
  {
    {file_server2__srv__SaveBinaryFile__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {file_server2__srv__SaveBinaryFile_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {file_server2__srv__SaveBinaryFile_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {file_server2__srv__SaveBinaryFile_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription file_server2__srv__SaveBinaryFile__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
file_server2__srv__SaveBinaryFile__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__SaveBinaryFile__TYPE_NAME, 31, 31},
      {file_server2__srv__SaveBinaryFile__FIELDS, 3, 3},
    },
    {file_server2__srv__SaveBinaryFile__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = file_server2__srv__SaveBinaryFile_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = file_server2__srv__SaveBinaryFile_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = file_server2__srv__SaveBinaryFile_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char file_server2__srv__SaveBinaryFile_Request__FIELD_NAME__name[] = "name";
static char file_server2__srv__SaveBinaryFile_Request__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field file_server2__srv__SaveBinaryFile_Request__FIELDS[] = {
  {
    {file_server2__srv__SaveBinaryFile_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Request__FIELD_NAME__value, 5, 5},
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
file_server2__srv__SaveBinaryFile_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__SaveBinaryFile_Request__TYPE_NAME, 39, 39},
      {file_server2__srv__SaveBinaryFile_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char file_server2__srv__SaveBinaryFile_Response__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field file_server2__srv__SaveBinaryFile_Response__FIELDS[] = {
  {
    {file_server2__srv__SaveBinaryFile_Response__FIELD_NAME__name, 4, 4},
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
file_server2__srv__SaveBinaryFile_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__SaveBinaryFile_Response__TYPE_NAME, 40, 40},
      {file_server2__srv__SaveBinaryFile_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char file_server2__srv__SaveBinaryFile_Event__FIELD_NAME__info[] = "info";
static char file_server2__srv__SaveBinaryFile_Event__FIELD_NAME__request[] = "request";
static char file_server2__srv__SaveBinaryFile_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field file_server2__srv__SaveBinaryFile_Event__FIELDS[] = {
  {
    {file_server2__srv__SaveBinaryFile_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {file_server2__srv__SaveBinaryFile_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {file_server2__srv__SaveBinaryFile_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription file_server2__srv__SaveBinaryFile_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {file_server2__srv__SaveBinaryFile_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
file_server2__srv__SaveBinaryFile_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {file_server2__srv__SaveBinaryFile_Event__TYPE_NAME, 37, 37},
      {file_server2__srv__SaveBinaryFile_Event__FIELDS, 3, 3},
    },
    {file_server2__srv__SaveBinaryFile_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = file_server2__srv__SaveBinaryFile_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = file_server2__srv__SaveBinaryFile_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "uint8[] value\n"
  "---\n"
  "string name";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__SaveBinaryFile__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__SaveBinaryFile__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__SaveBinaryFile_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__SaveBinaryFile_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__SaveBinaryFile_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__SaveBinaryFile_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
file_server2__srv__SaveBinaryFile_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {file_server2__srv__SaveBinaryFile_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__SaveBinaryFile__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__SaveBinaryFile__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *file_server2__srv__SaveBinaryFile_Event__get_individual_type_description_source(NULL);
    sources[3] = *file_server2__srv__SaveBinaryFile_Request__get_individual_type_description_source(NULL);
    sources[4] = *file_server2__srv__SaveBinaryFile_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__SaveBinaryFile_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__SaveBinaryFile_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__SaveBinaryFile_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__SaveBinaryFile_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
file_server2__srv__SaveBinaryFile_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *file_server2__srv__SaveBinaryFile_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *file_server2__srv__SaveBinaryFile_Request__get_individual_type_description_source(NULL);
    sources[3] = *file_server2__srv__SaveBinaryFile_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

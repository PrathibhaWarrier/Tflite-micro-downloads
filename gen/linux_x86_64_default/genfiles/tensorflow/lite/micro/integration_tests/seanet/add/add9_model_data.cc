#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/add/add9_model_data.h"

const unsigned int g_add9_model_data_size = 1016;alignas(16) const unsigned char g_add9_model_data[] = {0x1c,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0xb4,0x03,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xf8,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x14,0xfd,0xff,0xff,0x10,0x00,0x00,0x00,0x5c,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x00,0x00,0x07,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x5c,0x02,0x00,0x00,0xb0,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x66,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x4c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x70,0x00,0x00,0x00,0xb4,0xfd,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x79,0x4a,0x3b,0x3d,0x01,0x00,0x00,0x00,0xf3,0x26,0x9e,0x44,0x01,0x00,0x00,0x00,0x02,0x49,0xbb,0xc4,0x2a,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x75,0x5f,0x73,0x6b,0x69,0x70,0x5f,0x32,0x2f,0x61,0x64,0x64,0x2f,0x61,0x64,0x64,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x4c,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x70,0x01,0x00,0x00,0x5c,0xfe,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xdd,0xb9,0xfc,0x3c,0x01,0x00,0x00,0x00,0x38,0xd4,0x1c,0x44,0x01,0x00,0x00,0x00,0xe4,0xb7,0x7c,0xc4,0x2b,0x01,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x65,0x6e,0x63,0x6f,0x64,0x65,0x72,0x5f,0x31,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x34,0x78,0x34,0x5f,0x61,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x34,0x32,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x3b,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x33,0x78,0x33,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x35,0x33,0x2f,0x43,0x6f,0x6e,0x76,0x32,0x44,0x3b,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x65,0x6e,0x63,0x6f,0x64,0x65,0x72,0x5f,0x31,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x34,0x78,0x34,0x5f,0x61,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x34,0x32,0x2f,0x43,0x6f,0x6e,0x76,0x32,0x44,0x3b,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x65,0x6e,0x63,0x6f,0x64,0x65,0x72,0x5f,0x31,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x34,0x78,0x34,0x5f,0x61,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x5f,0x34,0x32,0x2f,0x42,0x69,0x61,0x73,0x41,0x64,0x64,0x2f,0x52,0x65,0x61,0x64,0x56,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x4f,0x70,0x31,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x88,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xb2,0x67,0x25,0x3d,0x01,0x00,0x00,0x00,0x8f,0x89,0x89,0x44,0x01,0x00,0x00,0x00,0x67,0x66,0xa5,0xc4,0x34,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x32,0x2f,0x73,0x68,0x6f,0x72,0x74,0x63,0x75,0x74,0x2f,0x61,0x64,0x64,0x2f,0x61,0x64,0x64,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x0a,0x00,0x00,0x00,0x02,0x00,0x00,0x00,};
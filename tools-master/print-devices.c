#define CL_TARGET_OPENCL_VERSION 300

#include "cl-helper.h"

int main(int argc, char **argv)
{
  return print_platforms_devices() ? 0 : 1;
}

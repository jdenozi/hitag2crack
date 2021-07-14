//
// Created by Denozi on 14/07/2021.
//
#include <stdio.h>
#include <CL/cl.h>

#define P(x) x,#x

void printClDeviceInfoString(cl_device_id device_id, cl_device_info param_name, const char* printable_name)
{
    char val[1024];
    clGetDeviceInfo(device_id, param_name, sizeof(val), &val, NULL);
    printf("%s: %s\n", printable_name, val);
}

void printClDeviceInfoBool(cl_device_id device_id, cl_device_info param_name, const char* printable_name)
{
    cl_bool val;
    clGetDeviceInfo(device_id, param_name, sizeof(val), &val, NULL);
    printf("%s: %d\n", printable_name, val);
}

void printClDeviceInfoUint(cl_device_id device_id, cl_device_info param_name, const char* printable_name)
{
    cl_uint val;
    clGetDeviceInfo(device_id, param_name, sizeof(val), &val, NULL);
    printf("%s: %d\n", printable_name, val);
}

void printClDeviceInfoUlong(cl_device_id device_id, cl_device_info param_name, const char* printable_name)
{
    cl_ulong val;
    clGetDeviceInfo(device_id, param_name, sizeof(val), &val, NULL);
    printf("%s: %llu\n", printable_name, val);
}


cmake_minimum_required(VERSION 3.19)
project(hitagcracker)

set(CMAKE_C_STANDARD 99)

add_executable(ht2crack5gpu ht2crack5gpu.c
        ht2crack5kernel.cl
        hitagcrypto.c
        ht2crackutils.c include/deviceinfo.h deviceinfo.c)
include_directories(include/)

find_package(OpenCL 3.0.0 REQUIRED)

target_link_libraries( ht2crack5gpu OpenCL::OpenCL)
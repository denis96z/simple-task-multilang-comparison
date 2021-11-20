cmake_minimum_required(VERSION 3.20)
project(proj-c C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-march=native")

set(CMAKE_CXX_FLAGS_DEBUG "-O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

add_executable(proj-1 main1.c)
add_executable(proj-2 main2.c)

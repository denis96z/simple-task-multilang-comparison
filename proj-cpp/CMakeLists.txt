cmake_minimum_required(VERSION 3.20)
project(proj-cpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-march=native")

set(CMAKE_CXX_FLAGS_DEBUG "-O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

include(conan/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(proj-1 main1.cpp)
target_link_libraries(proj-1 ${CONAN_LIBS})

add_executable(proj-2 main2.cpp)

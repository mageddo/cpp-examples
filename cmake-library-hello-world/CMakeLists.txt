cmake_minimum_required(VERSION 3.16)
project(cmake_library_hello_world)

set(CMAKE_CXX_STANDARD 14)

add_library(cmake_library_hello_world library.cpp library.h)
add_executable(executable main.cpp)
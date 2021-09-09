cmake_minimum_required(VERSION 3.8)

project(Function)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

add_definitions(-std=c++11)

add_executable(out_function main.cc test_function.cc)

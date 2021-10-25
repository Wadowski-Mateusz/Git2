cmake_minimum_required(VERSION 3.16)

project(firstClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(src main.cpp firstClass.cpp)

add_library(src firstClass.h)
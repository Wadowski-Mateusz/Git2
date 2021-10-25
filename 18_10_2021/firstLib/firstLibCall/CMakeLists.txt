cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
#project(firstLib)
include_directories(../include/include)


add_executable(firstLib main.cpp)
target_link_libraries(firstLib firstLibb)
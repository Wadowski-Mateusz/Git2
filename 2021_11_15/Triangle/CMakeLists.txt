cmake_minimum_required(VERSION 3.16)

project(Triangle)
include_directories(include)

add_executable(Triangle src/main.cpp src/Triangle.cpp src/Node.cpp)

#zwracanyTyp operator@(typPrawegoOperandu &nazwaPrawegoOperandu);
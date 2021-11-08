cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)

include_directories(../Library/include)

add_executable(klasy_i_obiekty main.cpp)
target_link_libraries(klasy_i_obiekty klasy_i_obiektyy)
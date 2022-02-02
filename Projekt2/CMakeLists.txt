cmake_minimum_required(VERSION 3.16)

project(Backpack)
include_directories(include)


add_executable(Backpack src/main.cpp src/Item.cpp src/Food.cpp src/Other.cpp src/Backpack.cpp src/Drink.cpp src/menu.cpp src/csv.cpp src/Exceptions.cpp)
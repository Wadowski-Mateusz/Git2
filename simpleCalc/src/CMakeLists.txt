cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(../lib/include)

    add_executable(simpleCalc main.cpp)

# Załączamy do naszej aplikacji biblioteki. Musi to być po add_executable
#target_link_libraries(simpleCalc ???)

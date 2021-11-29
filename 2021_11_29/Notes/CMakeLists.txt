cmake_minimum_required(VERSION 3.16)

project(Notes)
include_directories(include)

add_executable(Notes src/main.cpp src/Note.cpp src/ListNote.cpp src/TextNote.cpp src/NoteDirector.cpp)

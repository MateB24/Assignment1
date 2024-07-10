cmake_minimum_required(VERSION 3.27)
project(Assignment1)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Assignment1
        src/DynamicArray.cpp
        src/DynamicArray.h
        src/Point.cpp
        src/Point.h
        src/Triangle.cpp
        src/Triangle.h)

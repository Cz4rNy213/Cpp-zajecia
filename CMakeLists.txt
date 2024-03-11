cmake_minimum_required(VERSION 3.27)
project(Cpp_zajecia)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cpp_zajecia
        main
        README.md
        test
        test2.c
        zajecia1.cpp
        zajecia2.cpp
        zajecia2.h)

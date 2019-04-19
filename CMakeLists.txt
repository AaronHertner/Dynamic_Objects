cmake_minimum_required(VERSION 3.13)
project(Dynamic_Objects)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dynamic_Objects main.cpp Student.cpp Professor.cpp Human.cpp)
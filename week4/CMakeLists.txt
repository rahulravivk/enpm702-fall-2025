cmake_minimum_required(VERSION 3.22.1)
project(week3 VERSION 1.0 LANGUAGES C CXX)

include_directories(include)
add_executable(week4_cpp src/week4.cpp)

# Set C++17 standard for the targets
set_property(TARGET week4_cpp PROPERTY CXX_STANDARD 17)
set_property(TARGET week4_cpp PROPERTY CXX_STANDARD_REQUIRED ON)


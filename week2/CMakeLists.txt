cmake_minimum_required(VERSION 3.22.1)
project(week2 VERSION 1.0 LANGUAGES C CXX)

include_directories(include)
add_executable(week2_cpp src/week2.cpp)
add_executable(test2_cpp src/test2.cpp)
add_executable(week2_exercise_cpp src/week2_exercise.cpp)

# Set C++17 standard for the target
set_property(TARGET week2_cpp PROPERTY CXX_STANDARD 17)
set_property(TARGET week2_cpp PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET test2_cpp PROPERTY CXX_STANDARD 17)
set_property(TARGET test2_cpp PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET week2_exercise_cpp PROPERTY CXX_STANDARD 17)
set_property(TARGET week2_exercise_cpp PROPERTY CXX_STANDARD_REQUIRED ON)
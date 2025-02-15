# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(Cpp_learn)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the source files
#add_executable(Cpp_learn src/class1.cpp)
add_executable(Cpp_learn src/main.cpp src/Player.cpp src/Account.cpp)
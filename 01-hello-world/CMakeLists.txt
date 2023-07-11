# CMake >= 3.16
CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

# Define project name
PROJECT(cmake_helloworld
    VERSION 1.0
    DESCRIPTION "Hello World built in CMake"
    LANGUAGES CXX
)

# Using C++11
SET(CMAKE_CXX_STANDARD 11)

# Generate executable
ADD_EXECUTABLE(cmake_helloworld 
    src/main.cpp
)
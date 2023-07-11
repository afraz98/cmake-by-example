CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# Set the project name and version
PROJECT(cmake_math_functions VERSION 1.0)

# Specify the C++ standard
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

FILE(GLOB SOURCES "src/*.cpp")
ADD_EXECUTABLE(cmake_math_functions ${SOURCES})

# Include directory to be passed to g++, e.g. -I/path/to/include
TARGET_INCLUDE_DIRECTORIES(cmake_math_functions PRIVATE ${PROJECT_SOURCE_DIR}/include)


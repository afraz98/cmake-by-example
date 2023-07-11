CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# Set the project name and version
PROJECT(cmake_filesystem_search VERSION 1.0)

FIND_PACKAGE(Boost 1.71 REQUIRED COMPONENTS filesystem system)

IF(Boost_FOUND)
    MESSAGE("libboost found")
ELSE()
    MESSAGE(FATAL_ERROR "Cannot find libboost")
ENDIF()

# Specify the C++ standard
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

FILE(GLOB SOURCES "src/*.cpp")
ADD_EXECUTABLE(${CMAKE_PROJECT_NAME} ${SOURCES})

TARGET_LINK_LIBRARIES(cmake_filesystem_search PRIVATE Boost::filesystem)
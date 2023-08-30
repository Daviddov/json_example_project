cmake_minimum_required(VERSION 3.10)

project(lib VERSION 1.0)

# List of source files
file(GLOB SRCS *.cpp)

# Create the library
add_library(${PROJECT_NAME} ${SRCS})

# Include headers
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


cmake_minimum_required(VERSION 3.12)
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Include subdirectories
add_subdirectory(nlohmann)
add_subdirectory(lib)

# Create executable target
add_executable(MyApp main.cpp)

# Link the "logger" library to the executable
target_link_libraries(MyApp
    PRIVATE
    nlohmann
)

cmake_minimum_required(VERSION 3.10)

# Set the project name
project(single_responsibility_principle)
# Find Boost library
find_package(Boost REQUIRED)

# Include Boost headers
include_directories(${Boost_INCLUDE_DIRS})
# Add the executable
add_executable(single_responsibility_principle single_responsibility_principle_main.cpp)
cmake_minimum_required(VERSION 3.10)
project(simpleDB)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add_subdirectory(test)
add_executable(${PROJECT_NAME} src/main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(test C CXX)

file(GLOB SOURCE_FILES src/*)
file(GLOB INCLUDE_FILES includes/*)

include_directories(${INCLUDE_FILES})
add_executable(run ${SOURCE_FILES})

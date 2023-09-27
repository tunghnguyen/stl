cmake_minimum_required(VERSION 3.27.0)
project(STL VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

add_library(stl
    src/sort.cpp 
)
target_include_directories(stl PRIVATE include)
set_target_properties(stl PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 1
    PUBLIC_HEADER include/sort.hpp
)

add_executable(sort 
    src/sort.cpp
    src/sort.test.cpp
)
target_include_directories(sort PRIVATE include)

cmake_minimum_required(VERSION 3.16)

# Project meta
project(myfloat
    VERSION 1.0.0
    DESCRIPTION "Custom floating-point types library"
    LANGUAGES CXX
)

# Main options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Linking subdirectories
add_subdirectory(src)
add_subdirectory(app)

enable_testing()
add_subdirectory(tests)
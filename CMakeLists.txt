cmake_minimum_required(VERSION 3.15)
project(DietApp)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(DietDLL)
add_subdirectory(DietApp)
add_subdirectory(tests)
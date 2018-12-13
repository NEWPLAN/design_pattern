cmake_minimum_required(VERSION 2.8)
project(factory_test)

set(CMAKE_VERBOSE_MAKEFILE on )

add_compile_options(-std=c++11 -Wall -pg)

include_directories(include)
add_subdirectory(src)
add_executable(factory_demo test.cpp)


target_link_libraries(factory_demo factory)
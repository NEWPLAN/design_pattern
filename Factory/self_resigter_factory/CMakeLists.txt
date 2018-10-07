cmake_minimum_required(VERSION 2.8)
project(self_register_factory)

set(CMAKE_VERBOSE_MAKEFILE on )

add_compile_options(-std=c++11 -Wall)

add_executable(self_register_factory main.cpp)

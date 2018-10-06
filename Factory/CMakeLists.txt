cmake_minimum_required(VERSION 2.8)
project(factory_test)

add_compile_options(-std=c++11 -Wall)

include_directories(include)
add_subdirectory(src)
add_executable(factory_demo test.cpp)


target_link_libraries(factory_demo factory)
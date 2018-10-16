cmake_minimum_required(VERSION 2.8)

if (NOT TARGET animal)
    add_subdirectory(${CMAKE_SOURCE_DIR}/animal animal.out)
endif()
include_directories(${CMAKE_SOURCE_DIR}/animal)
add_library(dove SHARED dove.cpp)
target_link_libraries(dove animal)
cmake_minimum_required(VERSION 2.8)

if (NOT TARGET animal)
    add_subdirectory(${CMAKE_SOURCE_DIR}/animal animal.out)
endif()
include_directories(${CMAKE_SOURCE_DIR}/animal)

add_library(dog SHARED dog.cpp)
target_link_libraries(dog animal)
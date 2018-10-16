cmake_minimum_required(VERSION 2.8)

project(ANMIALZONE)
set(CMAKE_VERBOSE_MAKEFILE ON)

#set debug info
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

#add C++11 support
add_definitions(-std=c++11)

#add sub dict
if(NOT TARGET dove)
    add_subdirectory(dove)
endif()
if(NOT TARGET dog)
    add_subdirectory(dog)
endif()
if(NOT TARGET cat)
add_subdirectory(cat)
endif()



include_directories(${CMAKE_SOURCE_DIR}/dove)
include_directories(${CMAKE_SOURCE_DIR}/cat)
include_directories(${CMAKE_SOURCE_DIR}/dog)
include_directories(${CMAKE_SOURCE_DIR}/animal)



add_executable(demo zones/main.cpp)
target_link_libraries(demo cat dog dove)
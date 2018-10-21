cmake_minimum_required(VERSION 2.8)
project(memonto)

set(CMAKE_VERBOSE_MAKEFILE on )

add_compile_options(-std=c++11 -Wall)

#set(CMAKE_EXE_LINKER_FLAGS "-pthread")

include_directories(include)
#add_subdirectory(src)
aux_source_directory(./src DIRSRCS)
add_executable(memonto_test ./test/main.cpp ${DIRSRCS})

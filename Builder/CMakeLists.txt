cmake_minimum_required(VERSION 2.8)
project(builderTest)

set(CMAKE_VERBOSE_MAKEFILE on )

add_compile_options(-std=c++11 -Wall)


include_directories(include)
#add_subdirectory(src)
aux_source_directory(./src DIRSRCS)
add_executable(builder_test ./test/main.cpp ${DIRSRCS})

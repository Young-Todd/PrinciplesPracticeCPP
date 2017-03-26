cmake_minimum_required(VERSION 3.6)
project(PrinciplesPracticeCPP)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES chapter_3/basics.cpp chapter_3/std_lib_facilities.h)
add_executable(PrinciplesPracticeCPP ${SOURCE_FILES})

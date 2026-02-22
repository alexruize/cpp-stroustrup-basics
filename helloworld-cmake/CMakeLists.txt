cmake_minimum_required(VERSION 3.10.0)
project(helloworld VERSION 0.1.0 LANGUAGES C CXX)

add_library(helloworld helloworld.cpp)

include(CTest)
enable_testing()


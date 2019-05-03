cmake_minimum_required(VERSION 2.8)

message("STARTING TO GENERATE")

project(refactoring CXX)

add_subdirectory(src)

find_package(GTest REQUIRED)
find_package(GMock REQUIRED)

add_subdirectory(test)

enable_testing()

message("STOP !!!")

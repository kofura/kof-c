cmake_minimum_required(VERSION 3.31)
project(kof C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(kof_tests
        kof_map.h
        tests/main.c
)

enable_testing()

add_test(NAME kof_map COMMAND kof_tests map)
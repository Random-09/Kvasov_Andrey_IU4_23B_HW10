cmake_minimum_required(VERSION 3.24)
project(HW10 C)

set(CMAKE_C_STANDARD 11)

add_executable(HW10 main.c src/counting_sort.c include/counting_sort.h)

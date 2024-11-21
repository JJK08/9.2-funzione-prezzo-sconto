cmake_minimum_required(VERSION 3.29)
project(u_ C)

set(CMAKE_C_STANDARD 11)

add_executable(u_ main.c
        prezzo.c
        prezzo.h)

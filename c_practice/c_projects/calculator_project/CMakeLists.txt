cmake_minimum_required(VERSION 3.10)

project(calculator C)

include_directories(include)

add_executable(calculator
    src/main.c
    src/add.c
    src/sub.c
    src/mul.c
    src/div.c
)

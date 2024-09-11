cmake_minimum_required(VERSION 3.29)
project(Modern_Compiler_Implementation_in_C C)

set(CMAKE_C_STANDARD 90)

add_executable(Modern_Compiler_Implementation_in_C main.c
        util.h
        utils.c
        slp.h
        slp.c
        prog1.h
        prog1.c)

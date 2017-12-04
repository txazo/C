cmake_minimum_required(VERSION 3.5)
project(C)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        datatype/array.c
        datatype/enum.c
        datatype/string.c
        datatype/struct.c
        datatype/union.c
        grammar/address.c
        grammar/define.c
        grammar/pointer.c
        grammar/sizeof.c
        grammar/variable.c
        io/file.c
        io/file_copy.c
        io/getchar.c
        io/scanf.c
        memory/alloc.c
        memory/memory.c
        process/atexit.c
        process/env.c
        process/fork.c
        process/main.c
        process/process.c)

add_executable(C ${SOURCE_FILES})

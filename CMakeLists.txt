cmake_minimum_required(VERSION 3.10)
project(TRPO_2)
add_executable(TRPO_2
    main.cpp
    functions.cpp
)

add_executable(test
    functions.cpp
    test.cpp
)
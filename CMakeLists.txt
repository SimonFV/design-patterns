cmake_minimum_required(VERSION 3.8)

project(dessign_patterns)

set(src
    singleton/src/main.cpp
    singleton/src/singleton.cpp
)

include_directories(
    singleton/include/
)

add_executable(run ${src})
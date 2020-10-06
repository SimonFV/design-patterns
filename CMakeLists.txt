cmake_minimum_required(VERSION 3.8)

project(dessign_patterns)

set(src
    observer/src/main.cpp
    observer/src/observer.cpp
)

include_directories(
    observer/include/
)

add_executable(run ${src})
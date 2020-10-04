cmake_minimum_required(VERSION 3.8)

project(dessign_patterns)

set(src
    abstract_factory/src/main.cpp
    abstract_factory/src/abstract_factory.cpp
)

include_directories(
    abstract_factory/include/
)

add_executable(run ${src})
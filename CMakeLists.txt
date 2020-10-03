cmake_minimum_required(VERSION 3.8)

project(dessign_patterns)

set(src
    factory_method/src/main.cpp
    factory_method/src/factory.cpp
)

include_directories(
    factory_method/include/
)

add_executable(run ${src})
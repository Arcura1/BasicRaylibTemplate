cmake_minimum_required(VERSION 3.15)

project(MyRaylibTemplate)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(external/raylib)

add_executable(
    game
    src/main.cpp
)

target_link_libraries(
    game
    raylib
)

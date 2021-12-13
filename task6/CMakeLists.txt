cmake_minimum_required(VERSION 3.21)
project(task6)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex2 src/mainex2.cpp)
add_executable(ex3 src/ex3.cpp src/ex3.h)
add_executable(ex4 src/ex4.cpp src/coord3d.cpp src/coord3d.h)
add_executable(ex5 src/ex5.cpp src/matrix.cpp src/matrix.h)


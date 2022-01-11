cmake_minimum_required(VERSION 3.21)
project(task7)

set(CMAKE_CXX_STANDARD 14)

add_executable(task7ex1 src/main.cpp src/Person.cpp src/student.cpp src/erasmus_student.cpp)
add_executable(task7ex3 src/main.cpp src/solid.cpp src/ex3main.cpp src/sphere.cpp src/cuboid.cpp src/cube.cpp)


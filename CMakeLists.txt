cmake_minimum_required(VERSION 3.28)

project(algo)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_executable(main src/main.cpp)
add_executable(test src/test.cpp)
add_executable(scanf_test src/scanf_test.cpp)
add_executable(threeSum src/sumOf3.cpp)


# add_executable()

add_executable(sumOf4 src/sumOf4.cpp)

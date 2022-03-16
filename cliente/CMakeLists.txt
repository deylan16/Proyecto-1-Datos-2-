cmake_minimum_required(VERSION 3.20)
project(cliente)

set(CMAKE_CXX_STANDARD 14)

add_executable(cliente main.cpp Clientec/Cliente.cpp Clientec/Cliente.h)
target_link_libraries(cliente ws2_32)
target_link_libraries(cliente libws2_32.a)
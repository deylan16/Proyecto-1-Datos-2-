cmake_minimum_required(VERSION 3.20)
project(server)

set(CMAKE_CXX_STANDARD 14)

add_executable(server main.cpp Servidor/Server.cpp Servidor/Server.h Servidor/Lectura_Mensajes.cpp Servidor/Lectura_Mensajes.h Servidor/Datos_juego.cpp Servidor/Datos_juego.h)
target_link_libraries(server ws2_32)
target_link_libraries(server libws2_32.a)
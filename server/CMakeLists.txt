cmake_minimum_required(VERSION 3.20)
project(server)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS system window graphics)

add_executable(server main.cpp Servidor/Server.cpp Servidor/Server.h Servidor/Lectura_Mensajes.cpp Servidor/Lectura_Mensajes.h Servidor/Datos_juego.cpp Servidor/Datos_juego.h Tarjetas/Matriz_memoria.cpp Tarjetas/Matriz_memoria.h Tarjetas/Matriz_disco.cpp Tarjetas/Matriz_disco.h Tarjetas/Tarjetas_Cargadas.cpp Tarjetas/Tarjetas_Cargadas.h Servidor/Logica_juego.cpp Servidor/Logica_juego.h)
target_link_libraries(server ws2_32)
target_link_libraries(server libws2_32.a)
target_link_libraries(server sfml-system sfml-window sfml-graphics -static)
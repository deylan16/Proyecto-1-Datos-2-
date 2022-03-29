cmake_minimum_required(VERSION 3.20)
project(cliente)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS system window graphics)

add_executable(cliente main.cpp Clientec/Cliente.cpp Clientec/Cliente.h Interfaz/Ventana.cpp Interfaz/Ventana.h Interfaz/Componentes.cpp Interfaz/Componentes.h Clientec/Lectura_Mensajes.cpp Clientec/Lectura_Mensajes.h Tarjetas/Tarjeta.cpp Tarjetas/Tarjeta.h Tarjetas/PtrTarjetas.cpp Tarjetas/PtrTarjetas.h)
target_link_libraries(cliente ws2_32)
target_link_libraries(cliente libws2_32.a)
target_link_libraries(cliente sfml-system sfml-window sfml-graphics -static)
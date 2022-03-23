//
// Created by deyla on 22/3/2022.
//

#ifndef CLIENTE_LECTURA_MENSAJES_H
#define CLIENTE_LECTURA_MENSAJES_H


#include <string>


class Lectura_Mensajes {

public:
    bool *ptrseleccionar_jugador2 = nullptr;
    bool *ptrseleccionado_jugadores= nullptr;
    void mensaje_entrante(char texto[1024]);
    std::string char_a_string(char texto[1024]);
    void setptrseleccionar_jugador2(bool *Entrada_ptrseleccionar_jugador2);
    bool *getptrseleccionar_jugador2();
    void setptrseleccionado_jugadores(bool *Entrada_ptrseleccionado_jugadores);

};


#endif //CLIENTE_LECTURA_MENSAJES_H

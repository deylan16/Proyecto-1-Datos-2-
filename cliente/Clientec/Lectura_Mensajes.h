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
    bool *ptrjugando = nullptr;
    void mensaje_entrante(char texto[203097]);
    std::string char_a_string(char texto[203097]);
    void setptrseleccionar_jugador2(bool *Entrada_ptrseleccionar_jugador2);
    bool *getptrseleccionar_jugador2();
    void setptrseleccionado_jugadores(bool *Entrada_ptrseleccionado_jugadores);
    void setptrjugando(bool *Entrada_ptrjugando);
    void carga_imagen_reverso(char mensaje[203097]);

};


#endif //CLIENTE_LECTURA_MENSAJES_H

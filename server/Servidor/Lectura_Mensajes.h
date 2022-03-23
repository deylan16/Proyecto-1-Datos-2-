//
// Created by deyla on 22/3/2022.
//

#ifndef SERVER_LECTURA_MENSAJES_H
#define SERVER_LECTURA_MENSAJES_H


#include "Datos_juego.h"

class Lectura_Mensajes {
public:
    Datos_juego *datos = Datos_juego::GetInstance("Informacion");
    std::string *ptrmensaje_a_enviar;
    void mensaje_entrante(char texto[1024]);
    void setptrmensaje_a_enviar(std::string *Entrada_ptrmensaje_a_enviar);
    std::string char_a_string(char texto[1024]);
    void asigna_nombre_jugador(std::string cualjugador,char *texto);
};


#endif //SERVER_LECTURA_MENSAJES_H

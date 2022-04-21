//
// Created by deyla on 22/3/2022.
//

#ifndef SERVER_LECTURA_MENSAJES_H
#define SERVER_LECTURA_MENSAJES_H


#include "Datos_juego.h"
#include "../Tarjetas/Matriz_disco.h"
#include "Logica_juego.h"

class Lectura_Mensajes {
public:
    Logica_juego *logica = Logica_juego::GetInstance("Informacion");
    Matriz_disco *matriz_disco = Matriz_disco::GetInstance("Informacion");
    Datos_juego *datos = Datos_juego::GetInstance("Informacion");
    std::string *ptrmensaje_a_enviar;

    void mensaje_entrante(char texto[203097]);


    void setptrmensaje_a_enviar(std::string *Entrada_ptrmensaje_a_enviar);
    std::string char_a_string(char texto[203097]);
    void asigna_nombre_jugador(std::string cualjugador,char *texto);
    void da_imagen_reverso(std::string prefijo);
};


#endif //SERVER_LECTURA_MENSAJES_H

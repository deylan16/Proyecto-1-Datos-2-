//
// Created by deyla on 22/3/2022.
//

#include <iostream>
#include "Lectura_Mensajes.h"

void Lectura_Mensajes::mensaje_entrante(char *texto) {
    std::string primero;
    primero += texto[0];
    if (primero == "J"){
        std::string numero;
        numero += texto[1];
        asigna_nombre_jugador(numero,texto);}


}

void Lectura_Mensajes::setptrmensaje_a_enviar(std::string *Entrada_ptrmensaje_a_enviar) {
    this->ptrmensaje_a_enviar = Entrada_ptrmensaje_a_enviar;


}

std::string Lectura_Mensajes::char_a_string(char *texto) {
    std::string mensaje;
    int i = 0;
    while(true){
        if(texto[i] != NULL){
            mensaje += texto[i];
            i += 1;

        }
        else
            break;
    }

    return mensaje;
}

void Lectura_Mensajes::asigna_nombre_jugador(std::string cualjugador,char *texto) {
    std::string nombre;
    int i = 2;
    while(true){
        if(texto[i] != NULL){
            nombre += texto[i];
            i += 1;

        }
        else
            break;
    }
    std::cout<<nombre;
    if(cualjugador == "1"){
        datos->Nombre_jugador1 = nombre;
        *ptrmensaje_a_enviar = "Jugador_1_RECIBIDO";
    }
    if(cualjugador == "2"){
        datos->Nombre_jugador2 = nombre;
        *ptrmensaje_a_enviar = "Jugador_2_RECIBIDO";
    }

}

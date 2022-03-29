//
// Created by deyla on 22/3/2022.
//

#include <iostream>
#include <fstream>
#include "Lectura_Mensajes.h"

void Lectura_Mensajes::mensaje_entrante(char texto[203097]) {
    std::string mensaje = char_a_string(texto);
    std::cout<<"EL servidor dice:"<<mensaje<<std::endl;
    if(mensaje == "Jugador_1_RECIBIDO"){
        *ptrseleccionar_jugador2 = true;
    }
    if(mensaje == "Jugador_2_RECIBIDO"){
        *ptrseleccionado_jugadores = false;
        *ptrjugando = true;
    }

    else{
        carga_imagen_reverso(texto);
    }


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

void Lectura_Mensajes::setptrseleccionar_jugador2(bool *Entrada_ptrseleccionar_jugador2) {
    this->ptrseleccionar_jugador2 = Entrada_ptrseleccionar_jugador2;

}

bool *Lectura_Mensajes::getptrseleccionar_jugador2() {
    return this->ptrseleccionar_jugador2;
}
void Lectura_Mensajes::setptrseleccionado_jugadores(bool *Entrada_ptrseleccionado_jugadores) {
    this->ptrseleccionado_jugadores = Entrada_ptrseleccionado_jugadores;
}

void Lectura_Mensajes::setptrjugando(bool *Entrada_ptrjugando) {
    this->ptrjugando = Entrada_ptrjugando;

}

void Lectura_Mensajes::carga_imagen_reverso(char mensaje[203097]) {
    std::ofstream datos_img_reverso("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\datos_reverso.txt",std::ios::out|std::ios::binary);
    if(!datos_img_reverso.good()){
        std::cout<<"ERROR";}
    for (int i = 0; i <= 203097; i = i + 1) {
        datos_img_reverso.put(mensaje[i]);


    }

}



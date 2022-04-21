//
// Created by deyla on 22/3/2022.
//

#ifndef CLIENTE_LECTURA_MENSAJES_H
#define CLIENTE_LECTURA_MENSAJES_H


#include <string>
#include "../Tarjetas/PtrTarjetas.h"


class Lectura_Mensajes {

public:
    PtrTarjetas *ptr_Tarjetas = PtrTarjetas::GetInstance("Informacion");
    bool *ptrseleccionar_jugador2 = nullptr;
    bool *ptrseleccionado_jugadores= nullptr;
    bool *ptr_igual= nullptr;
    bool *ptrjugando = nullptr;
    bool reverso = true;
    std::string *ptr_Nombre1 = nullptr;
    std::string *ptr_Nombre2 = nullptr;
    std::string *Puntaje1 = nullptr;
    std::string *Puntaje2 = nullptr;
    std::string *ptr_turno = nullptr;
    std::string *ptr_mensaje = nullptr;
    void mensaje_entrante(char texto[203097]);
    std::string char_a_string(char texto[203097]);
    void setptrseleccionar_jugador2(bool *Entrada_ptrseleccionar_jugador2);
    bool *getptrseleccionar_jugador2();
    void setptrseleccionado_jugadores(bool *Entrada_ptrseleccionado_jugadores);
    void setptrjugando(bool *Entrada_ptrjugando);
    void carga_imagen_reverso(char mensaje[203097]);
    void carga_imagen_reverso_encontrada(char mensaje[203097]);
    void cambien_carta_1(std::string posicion,char texto[203097]);
    void cambien_carta_2(std::string posicion,char texto[203097]);
    void son_iguales(std::string mensaje);

};


#endif //CLIENTE_LECTURA_MENSAJES_H

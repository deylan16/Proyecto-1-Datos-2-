//
// Created by deyla on 16/3/2022.
//

#ifndef CLIENTE_VENTANA_H
#define CLIENTE_VENTANA_H
#include <SFML/Graphics.hpp>
#include "../Clientec/Cliente.h"
#include "Componentes.h"

class Ventana {
public:


    Cliente *Scliente;
    Lectura_Mensajes *lector;
    sf::RenderWindow *ptrwindow ;
    sf::Event event;
    bool escribiendo = false;
    bool seleccionado_jugadores = true;
    bool *ptrseleccionado_jugadores = &seleccionado_jugadores;
    Componentes *componentes = new Componentes();
    std::string entrada = "";
    int contador_botones = 4;
    int contador_botones2 = 2;
    bool seleccionar_jugador2 = false;
    bool *ptrseleccionar_jugador2 = &seleccionar_jugador2;
    bool jugando = false;
    bool *ptrjugando = &jugando;
    bool carga_ing_reverso = true;
    int contador_tarjetas = 0;
    bool igual = false;
    bool *ptr_igual = &igual;
    int contador_espera = 10;
    std::string Nombre1;
    std::string *ptr_Nombre1 = &Nombre1;
    std::string Nombre2;
    std::string *ptr_Nombre2 = &Nombre2;
    std::string Puntaje1;
    std::string *ptr_Puntaje1 = &Puntaje1;
    std::string Puntaje2;
    std::string *ptr_Puntaje2 = &Puntaje2;
    std::string turno= "1";
    std::string *ptr_turno = &turno;
    std::string mensaje= "";
    std::string *ptr_mensaje = &mensaje;


    Ventana(Cliente Scliente1, sf::RenderWindow *window);
    void seleccion_jugadores();
    void ventana_principal();
    void juego();



};


#endif //CLIENTE_VENTANA_H

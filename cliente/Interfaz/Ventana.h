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
    bool seleccionar_jugador2 = false;
    bool *ptrseleccionar_jugador2 = &seleccionar_jugador2;

    Ventana(Cliente Scliente1, sf::RenderWindow *window);
    void seleccion_jugadores();
    void ventana_principal();


};


#endif //CLIENTE_VENTANA_H

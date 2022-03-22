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
    Cliente Scliente;
    sf::RenderWindow *ptrwindow ;
    sf::Event event;
    bool escribiendo = false;
    bool seleccionado_jugadores = true;
    Componentes *componentes = new Componentes();
    std::string entrada = "";
    int contador_botones = 4;
    bool seleccionar_jugador2 = false;

    Ventana(Cliente Scliente1, sf::RenderWindow *window);
    void seleccion_jugadores();
    void ventana_principal();


};


#endif //CLIENTE_VENTANA_H

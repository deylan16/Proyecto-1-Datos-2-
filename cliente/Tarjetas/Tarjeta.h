//
// Created by deyla on 23/3/2022.
//

#ifndef CLIENTE_TARJETA_H
#define CLIENTE_TARJETA_H


#include <SFML/Graphics/RenderWindow.hpp>

class Tarjeta {
public:
    sf::RenderWindow *ptrwindow ;
    int mousex;
    int mousey;
    std::string fila_columna;
    void setPtrwindow( sf::RenderWindow *window);
    void setposicion_mouse(int entrada_mousex,int entrada_mousey);
    bool creaBoton(int posicionx, int posiciony, int ancho, int alto);

};


#endif //CLIENTE_TARJETA_H

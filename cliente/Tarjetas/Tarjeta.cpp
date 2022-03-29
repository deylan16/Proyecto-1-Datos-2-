//
// Created by deyla on 23/3/2022.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Window/Mouse.hpp>
#include <iostream>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "Tarjeta.h"
void Tarjeta::setPtrwindow(sf::RenderWindow *window) {
    this->ptrwindow = window;

}

bool Tarjeta::creaBoton(int posicionx, int posiciony, int ancho, int alto) {
    //sf::RectangleShape BotonAceptar(sf::Vector2f(ancho,alto));BotonAceptar.setPosition(posicionx,posiciony);BotonAceptar.setFillColor(sf::Color::Blue);ptrwindow->draw(BotonAceptar);
    sf::Texture textura;
    if(!textura.loadFromFile("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\datos_reverso.txt"))
    {
        // Si hay un error salimos
        std::cout<< "fallo";
    }
    sf::Sprite sprite;
    sprite.setTexture(textura);
    sprite.move(posicionx, posiciony);
    ptrwindow->draw(sprite);
    if (posicionx<this->mousex && this->mousex<(posicionx+ancho) && this->mousey<(posiciony+alto) && this->mousey>posiciony){

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
            return true;
            //Scliente.Enviar(entrada);
        }
        else
            return false;
    }
    else
        return false;
}

void Tarjeta::setposicion_mouse(int entrada_mousex, int entrada_mousey) {
    this->mousex = entrada_mousex;
    this->mousey = entrada_mousey;

}

#include <iostream>
#include "Clientec/Cliente.h"
#include "Interfaz/Ventana.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(900,700),"Hola");
    sf::RenderWindow *ptrwindow;
    ptrwindow = &window;
    Cliente *Cliente = new class Cliente();
    Ventana *ventana = new Ventana(*Cliente,ptrwindow);
    ventana->ventana_principal();


    //Cliente->Enviar();
    //Cliente->Recibir();
    /*while(true)
    {
        Cliente->Enviar();
        Cliente->Recibir();
    }*/
}

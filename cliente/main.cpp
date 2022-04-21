#include <iostream>
#include "Clientec/Cliente.h"
#include "Interfaz/Ventana.h"


int main() {

    sf::RenderWindow window(sf::VideoMode(1100,1000),"Memoria");
    sf::RenderWindow *ptrwindow;
    ptrwindow = &window;
    Lectura_Mensajes *lector = new Lectura_Mensajes();
    Cliente *Cliente = new class Cliente(lector);
    Ventana *ventana = new Ventana(*Cliente,ptrwindow);
    lector->setptrseleccionar_jugador2( ventana->ptrseleccionar_jugador2);
    lector->setptrseleccionado_jugadores(ventana->ptrseleccionado_jugadores);
    lector->setptrjugando(ventana->ptrjugando);
    lector->ptr_igual = ventana->ptr_igual;
    lector->ptr_Nombre1 = ventana->ptr_Nombre1;
    lector->ptr_Nombre2 = ventana->ptr_Nombre2;
    lector->Puntaje1 = ventana->ptr_Puntaje1;
    lector->Puntaje2 = ventana->ptr_Puntaje2;
    lector->ptr_turno = ventana->ptr_turno;
    lector->ptr_mensaje = ventana->ptr_mensaje;
    //lector->setventana(*ventana);
    ventana->ventana_principal();



    //Cliente->Enviar();
    //Cliente->Recibir();
    /*while(true)
    {
        Cliente->Enviar();
        Cliente->Recibir();
    }*/
    // Abre la imagen

    return 0;
}

#include <iostream>
#include "Servidor/Server.h"
#include "Servidor/Datos_juego.h"

int main() {
    Server *Servidor = new Server();
    while(true)
    {
        Servidor->Recibir();
        //Servidor->Enviar();
    }
    /*Datos_juego *datos = Datos_juego::GetInstance("Informacion");
    std::cout<<datos->hola;
    Datos_juego *datos2 = Datos_juego::GetInstance("Informacion2");
    datos->hola = false;
    std::cout<<datos2->hola;*/
}

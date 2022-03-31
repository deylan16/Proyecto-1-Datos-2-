#include <iostream>
#include <fstream>
#include "Servidor/Server.h"
#include "Servidor/Datos_juego.h"
#include "Tarjetas/Matriz_memoria.h"

int main() {

    /*Matriz_memoria *matriz_en_memoria = Matriz_memoria::GetInstance("Informacion");
    matriz_en_memoria->generar_matriz();
    //std::cout<<matriz_en_memoria->demetarjeta("7:7");
    matriz_en_memoria->cambiaestadotarjeta("7:7");*/



    Server *Servidor = new Server();
    while(true)
    {
        Servidor->Recibir();
        //Servidor->Enviar();
    }

}

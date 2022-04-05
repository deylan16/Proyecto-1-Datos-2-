#include <iostream>
#include <fstream>
#include "Servidor/Server.h"
#include "Servidor/Datos_juego.h"
#include "Tarjetas/Matriz_memoria.h"
#include <SFML/Graphics.hpp>
#include <thread>
#include "Tarjetas/Matriz_disco.h"


int main() {



    /*std::cout<<matriz_disco->deme_la_imagen("1:0")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("4:4")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("7:6")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("5:3")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("3:2")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("6:6")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("1:3")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("0:4")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("3:3")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("4:3")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("7:4")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("6:3")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("2:3")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("1:4")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("5:6")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("5:1")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("3:7")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("6:2")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("1:7")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("0:6")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("7:7")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("1:1")<<std::endl;
    std::cout<<matriz_disco->deme_la_imagen("1:6")<<std::endl;*/



    Server *Servidor = new Server();
    Servidor->matriz_disco->iniciamatriz();

    while(true)
    {
        std::cout<<"*******************************************************"<<std::endl;
        std::cout<<"Jugador 1:"<<Servidor->datos->Nombre_jugador1<<std::endl;
        std::cout<<"Jugador 2:"<<Servidor->datos->Nombre_jugador2<<std::endl;
        std::cout<<"Matriz en memoria"<<std::endl;
        for(int i = 0;i<20;i = i+2){
            if(Servidor->matriz_disco->ptr_tarjetascargadas[i] != nullptr ||Servidor->matriz_disco->ptr_tarjetascargadas[i+1] != nullptr ){
                std::string fila;
                if(Servidor->matriz_disco->ptr_tarjetascargadas[i] != nullptr){
                    fila += Servidor->matriz_disco->ptr_tarjetascargadas[i]->posicion +Servidor->matriz_disco->ptr_tarjetascargadas[i]->tipo;
                }
                else{
                    fila += "vacio";
                }

                fila += "||";
                if(Servidor->matriz_disco->ptr_tarjetascargadas[i+1] != nullptr){
                    fila += Servidor->matriz_disco->ptr_tarjetascargadas[i+1]->posicion +Servidor->matriz_disco->ptr_tarjetascargadas[i+1]->tipo;
                }
                else{
                    fila += "vacio";
                }
                std::cout<<fila<<std::endl;
            }
            else{
                std::cout<<"vacio || vacio"<<std::endl;
            }
        }

        std::cout<<"*******************************************************"<<std::endl;
        Servidor->Recibir();


        //Servidor->Enviar();

    }

}

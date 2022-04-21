#include <iostream>
#include <fstream>
#include "Servidor/Server.h"
#include "Servidor/Datos_juego.h"
#include "Tarjetas/Matriz_memoria.h"
#include <SFML/Graphics.hpp>
#include <thread>
#include<windows.h>
#include<stdio.h>
#include<tchar.h>
#include "Tarjetas/Matriz_disco.h"
#define DIV 1048576
#define WIDTH 7
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
        Servidor->Recibir();

        std::string matriz;
        /*for(int i = 0;i<20;i = i+2){
            std::cout<<i<<std::endl;
                /*if(Servidor->matriz_disco->ptr_tarjetascargadas[i] != nullptr ||Servidor->matriz_disco->ptr_tarjetascargadas[i+1] != nullptr ){
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
                    matriz += fila;
                }
                else{
                    matriz += "vacio || vacio";
                }
                matriz += "\n";*/
            //}
        if(Servidor->datos->mostrar){
            std::cout<<"*******************************************************"<<std::endl;
            std::cout<<"Jugador 1:"<<Servidor->datos->Nombre_jugador1<<"                 "<<"Puntaje:"<<Servidor->datos->puntaje_jugador1<<"                 "<<"Page faults:"<<Servidor->datos->page_faults<<std::endl;
            std::cout<<"Jugador 2:"<<Servidor->datos->Nombre_jugador2<<"                 "<<"Puntaje:"<<Servidor->datos->puntaje_jugador2<<"                 "<<"Page hit:"<<Servidor->datos->page_hit<<std::endl;

            std::cout<<"Matriz en memoria"<<std::endl;
            if(Servidor->matriz_disco->ptr_tarjetascargadas[0] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[0]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[0]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[1] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[1]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[1]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[2] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[2]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[2]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[3] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[3]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[3]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[4] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[4]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[4]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[5] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[5]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[5]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[6] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[6]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[6]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[7] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[7]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[7]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[8] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[8]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[8]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[9] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[9]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[9]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[10] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[10]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[10]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[11] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[11]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[11]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[12] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[12]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[12]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[13] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[13]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[13]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[14] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[14]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[14]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[15] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[15]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[15]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[16] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[16]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[16]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[17] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[17]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[17]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[18] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[18]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[18]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }
            if(Servidor->matriz_disco->ptr_tarjetascargadas[19] != nullptr){
                std::cout<<Servidor->matriz_disco->ptr_tarjetascargadas[19]->posicion <<Servidor->matriz_disco->ptr_tarjetascargadas[19]->tipo<<std::endl;}
            else{
                std::cout<<"Vacio"<<std::endl;
            }


            std::ifstream archivo;
            archivo.open("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt",std::ios::in);
            if(archivo.fail()){
                std::cout<<"ERROR";
            }
            std::string texto;


            while (getline(archivo, texto)) {
                std::string primera = "";
                primera += texto[0];
                if(primera == "f" || primera == "t")
                    std::cout<<texto<<std::endl;
            }
            MEMORYSTATUSEX statex;

            statex.dwLength = sizeof (statex);

            GlobalMemoryStatusEx (&statex);
            _tprintf (TEXT("  %*ld porciento de memoria en uso.\n"),WIDTH, statex.dwMemoryLoad);
            _tprintf (TEXT(" %*I64d total Mbytes  de memoria.\n"),WIDTH,statex.ullTotalPhys/DIV);
            _tprintf (TEXT(" %*I64d  Mbytes libres de memoria.\n"),WIDTH, statex.ullAvailPhys/DIV);


            std::cout<<"*******************************************************"<<std::endl;

        }

        //Servidor->Enviar();


    }

}

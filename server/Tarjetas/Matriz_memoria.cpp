//
// Created by deyla on 31/3/2022.
//

#include <fstream>
#include <iostream>
#include "Matriz_memoria.h"
Matriz_memoria* Matriz_memoria::pinstance_{nullptr};
Matriz_memoria *Matriz_memoria::GetInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new Matriz_memoria(value);
    }
    return pinstance_;
}

void Matriz_memoria::generar_matriz() {
    std::ofstream archivo;
    archivo.open("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt",std::ios::out);
    archivo<<"";
    archivo.close();
    archivo.open("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt",std::ios::app);
    if(archivo.fail()){
        std::cout<<"ERROR";
    }
    for(int i = 0;i < 8;i++){

        for(int j = 0; j < 8; j = j + 1){
                std::string datos;
                datos += "f";
                srand (time(NULL));

                while(true){

                    int posicion = rand() % 64;

                    if(tipos[posicion] != ""){

                        datos += tipos[posicion];
                        tipos[posicion] = "";
                        break;
                    }

                }

                datos += "&";
                archivo<<datos;
                //contador += 1;
        }
        archivo<<"\n";

    }
    archivo.close();


}

std::string Matriz_memoria::demetarjeta(std::string posicion) {

    std::ifstream archivo;
    archivo.open("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt",std::ios::in);
    if(archivo.fail()){
        std::cout<<"ERROR";
    }
    std::string texto;
    int fila = 0;

    while (getline(archivo, texto)) {
        // Lo vamos imprimiendo
        int columna = 0;
        for(int i= 0 ;i <= texto.length();i++){
            //std::cout << texto[i]<< std::endl;
            std::string letra;
            letra += texto[i];
            std::string posicion2 = std::to_string(fila) + ":" +std::to_string(columna);
            if(posicion == posicion2){

                std::string informacion;
                int j = i;
                while(true){
                    std::string letra2;
                    letra2 += texto[j];

                    if (letra2 == "&"){

                        return informacion;
                    }

                    else{
                        informacion += letra2 ;
                        j += 1;
                    }


                }
            }
            if (letra == "&"){


                //
                columna += 1;
            }

        }
        //std::cout << texto.length()<< std::endl;
        //std::cout << texto<< std::endl;
        fila += 1;
    }

    archivo.close();
    return std::__cxx11::string();
}

void Matriz_memoria::cambiaestadotarjeta(std::string posicion) {
    std::cout<<"*****************"<<posicion<<std::endl;
    std::ifstream archivo;
    archivo.open("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt",std::ios::in);
    if(archivo.fail()){
        std::cout<<"ERROR";
    }
    std::string texto;

    std::string todotexto;
    while (getline(archivo, texto)) {

        todotexto += texto;
        todotexto += "\n";
    }
    archivo.close();
    int fila = 0;
    int columna = 0;
    int contador = 1;
    std::string textofinal;
    //std::cout<<todotexto<<std::endl;
    for(int i= 0 ;i <= todotexto.length();i++){

        std::string letra;
        letra +=todotexto[i];
        std::string posicion2 = std::to_string(fila) + ":" +std::to_string(columna);
        if(posicion == posicion2 ){

                textofinal += "t";
                posicion = "ya_no_mas";



        }
        else{
            textofinal += letra;
        }
        if(columna == 8){
            fila += 1;
            columna = 0;
            //textofinal += "\n";
            continue;
            std::cout<<fila<<std::endl;
        }
        if(letra == "&"){
            columna += 1;
            //std::cout<<columna<<std::endl;
        }

    }
    std::ofstream archivo2;
    archivo2.open("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt",std::ios::out);
    archivo2<<textofinal;
    archivo.close();
    }




std::mutex Matriz_memoria::mutex_;

/*
    }*/
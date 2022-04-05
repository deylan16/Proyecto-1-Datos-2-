//
// Created by deyla on 31/3/2022.
//

#include <iostream>
#include <fstream>
#include "Matriz_disco.h"
Matriz_disco* Matriz_disco::pinstance_{nullptr};
Matriz_disco *Matriz_disco::GetInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new Matriz_disco(value);
    }
    return pinstance_;
}

std::string Matriz_disco::deme_la_imagen(std::string posicion) {


    //std::cout<<estacargada(posicion);
    std::string esta = estacargada(posicion);
    if(esta != "NO"){
        std::cout<<"esta:"<<posicion<<std::endl;
        return ptr_tarjetascargadas[stoi(esta)]->imagen;
    }
    else{
        if(espacio_en_tarjetas == 19){
            espacio_en_tarjetas = 0;
        }
        else{
            espacio_en_tarjetas += 1;
        }
        //std::cout<<"va por el eespacio:"<<espacio_en_tarjetas<<std::endl;

        //std::cout<<espacio_en_tarjetas<<std::endl;
        if(ptr_tarjetascargadas[espacio_en_tarjetas] == nullptr){
            ptr_tarjetascargadas[espacio_en_tarjetas]= cargarTarjeta(posicion,matriz_en_memoria->demetarjeta(posicion));
        }

        else{
            matriz_en_memoria->cambiaestadotarjeta(ptr_tarjetascargadas[espacio_en_tarjetas]->posicion);
            ptr_tarjetascargadas[espacio_en_tarjetas]= cargarTarjeta(posicion,matriz_en_memoria->demetarjeta(posicion));
            //std::cout<<"el espacio esta ocupado:"<<espacio_en_tarjetas<<std::endl;
        }


        return ptr_tarjetascargadas[espacio_en_tarjetas]->imagen;

    }


}

std::string Matriz_disco::estacargada(std::string posicion) {

    std::string salida = "NO";
    for(int i= 0;i< 20;i++){

        if(ptr_tarjetascargadas[i] != nullptr){
            if(ptr_tarjetascargadas[i]->posicion == posicion){
                salida =  std::to_string(i);
                break;
            }

        }

    }

    //std::cout<<salida;
    return salida;

}

void Matriz_disco::iniciamatriz() {
    matriz_en_memoria->generar_matriz();

    for(int i= 0;i< 20;i++){
        ptr_tarjetascargadas[i] = nullptr;
    }
}

Tarjetas_Cargadas * Matriz_disco::cargarTarjeta(std::string posicion, std::string informacion) {
    Tarjetas_Cargadas *tarjetas_cargadas = new Tarjetas_Cargadas();
    tarjetas_cargadas->posicion = posicion;
    tarjetas_cargadas->estado = informacion[0];
    informacion.erase(0,1);
    tarjetas_cargadas->tipo = informacion;
    std::string ruta = "C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Imagenes\\" +informacion+".png";

    std::ifstream image(ruta,std::ios::in| std::ios::binary);
    if(!image.good()){
        std::cout<<"ERROR"<<ruta;
    }

    char ch;
    std::string texto = "";
    while(!image.eof()){

        ch = image.get();
        texto += ch;

    }
    image.close();
    tarjetas_cargadas->imagen = texto;
    return tarjetas_cargadas;
}

std::string Matriz_disco::deme_la_tipo(std::string posicion) {
    std::string esta = estacargada(posicion);
    if(esta != "NO"){

        return ptr_tarjetascargadas[stoi(esta)]->tipo;
    }
    else{
        if(espacio_en_tarjetas == 19){
            espacio_en_tarjetas = 0;
        }
        else{
            espacio_en_tarjetas += 1;
        }
        //std::cout<<"va por el eespacio:"<<espacio_en_tarjetas<<std::endl;

        //std::cout<<espacio_en_tarjetas<<std::endl;
        if(ptr_tarjetascargadas[espacio_en_tarjetas] == nullptr){
            ptr_tarjetascargadas[espacio_en_tarjetas]= cargarTarjeta(posicion,matriz_en_memoria->demetarjeta(posicion));
        }

        else{
            matriz_en_memoria->cambiaestadotarjeta(ptr_tarjetascargadas[espacio_en_tarjetas]->posicion);
            ptr_tarjetascargadas[espacio_en_tarjetas]= cargarTarjeta(posicion,matriz_en_memoria->demetarjeta(posicion));
            //std::cout<<"el espacio esta ocupado:"<<espacio_en_tarjetas<<std::endl;
        }


        return ptr_tarjetascargadas[espacio_en_tarjetas]->tipo;
}}

std::mutex Matriz_disco::mutex_;
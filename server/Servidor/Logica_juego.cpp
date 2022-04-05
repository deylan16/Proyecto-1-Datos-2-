//
// Created by deyla on 4/4/2022.
//

#include "Logica_juego.h"
#include <fstream>
#include <iostream>

Logica_juego* Logica_juego::pinstance_{nullptr};
Logica_juego *Logica_juego::GetInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new Logica_juego(value);
    }
    return pinstance_;
}

std::string Logica_juego::deme_tarjeta(std::string posicion) {
    std::string respuesta;
    if(posicion1 == ""){
        posicion1 = posicion;
         respuesta="A"+posicion+ matriz_disco->deme_la_imagen(posicion);
    }
    else{
        posicion2 = posicion;
        respuesta="B"+posicion+ matriz_disco->deme_la_imagen(posicion);
        //son_iguales();
    }

    return respuesta;
}

std::string Logica_juego::son_iguales() {
    std::string tipo1 = matriz_disco->deme_la_tipo(posicion1);
    std::string tipo2 = matriz_disco->deme_la_tipo(posicion2);
    if(tipo1 == tipo2){
        return "SI SON";
    }
    else{

        return "NO SON";
    }

}

std::mutex Logica_juego::mutex_;
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

void Logica_juego::poderes(std::string tipo) {
    if(tipo == "Kraber"){
        if(datos->jugando =="2"){
            datos->puntaje_jugador1 -= 1;
        }
        else{
            datos->puntaje_jugador2 -= 1;

        }
        this->mensaje= "Heatshot";
    }
    if(tipo == "Crypto"){
        if(datos->jugando =="2"){
            datos->puntaje_jugador1 -= 1;
            datos->puntaje_jugador2 += 1;
            datos->jugando ="1";}
        else{
            datos->puntaje_jugador2 -= 1;
            datos->puntaje_jugador1 += 1;
            datos->jugando ="2";
        }

        this->mensaje= "Hakeo:doble_turno";
    }
    if(tipo == "Bloodhound"){
        std::string tipo1 = matriz_disco->deme_la_tipo("7:7");

        std::string pos2;
        bool salir = false;
        for(int i = 0;i<8;i++){
            for(int j = 0;j<8;j++){
                pos2 = "";
                pos2 += std::to_string(i);
                pos2 += ":";
                pos2 += std::to_string(j);

                std::string tipo2 = matriz_disco->deme_la_tipo(pos2);
                std::cout<<"###########"<<tipo1<<tipo2<<std::endl;
                if(tipo1 == tipo2){
                    salir = true;
                    break;
                }
            }
            if(salir){
                break;
            }
        }
        std::string texto = "Visible_";
        texto += pos2;
        texto += "-7:7";


        this->mensaje= texto;
    }



}

std::mutex Logica_juego::mutex_;
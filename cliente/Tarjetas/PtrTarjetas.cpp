//
// Created by deyla on 29/3/2022.
//

#include <iostream>
#include "PtrTarjetas.h"
PtrTarjetas* PtrTarjetas::pinstance_{nullptr};
PtrTarjetas *PtrTarjetas::GetInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new PtrTarjetas(value);
    }
    return pinstance_;
}



void PtrTarjetas::set_ptrtarjeta(int i,int j,Tarjeta *tarjeta) {

    ptr_tarjetas2[i][j] = {tarjeta};

}

void PtrTarjetas::cambieruta(std::string posicion,std::string numerocarta) {
    //std::cout<<"*********"<<recibiendo_tarjeta1<<std::endl;
    std::string filaS;
    filaS += posicion[0];
    int fila = std::stoi(filaS);
    std::string columnaS;
    columnaS += posicion[2];
    int columna = std::stoi(columnaS);
    if(numerocarta == "1"){
        ptr_tarjetas2[fila][columna]->ruta = "C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\imagen1.txt";
    }
    if(numerocarta == "2"){
        ptr_tarjetas2[fila][columna]->ruta = "C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\imagen2.txt";
    }
    if(numerocarta == "0"){
        ptr_tarjetas2[fila][columna]->ruta = "C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\datos_reverso.txt";
    }
    if(numerocarta == "3"){
        ptr_tarjetas2[fila][columna]->ruta = "C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\datos_reverso_encontrada.txt";
    }


}

std::mutex PtrTarjetas::mutex_;
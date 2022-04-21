//
// Created by deyla on 22/3/2022.
//

#include <iostream>
#include <fstream>
#include <SFML/Graphics/Texture.hpp>
#include "Lectura_Mensajes.h"
#include <chrono>
#include <thread>

void Lectura_Mensajes::mensaje_entrante(char texto[203097]) {
    std::string mensaje = char_a_string(texto);
    std::cout<<"EL servidor dice:"<<mensaje<<std::endl;
    std::string primero;
    primero += texto[0];
    if(mensaje == "Jugador_1_RECIBIDO"){
        *ptrseleccionar_jugador2 = true;
    }
    if(mensaje == "Jugador_2_RECIBIDO"){
        *ptrseleccionado_jugadores = false;
        *ptrjugando = true;
    }
    if (primero == "n"){
        std::string numero;
        numero += texto[1];
        std::string mensaje;
        int i = 2;
        while(true){
            if(texto[i] != NULL){
                mensaje += texto[i];
                i += 1;

            }
            else
                break;
        }
        if(numero == "1"){
            *ptr_Nombre1 = mensaje;
        }
        else{
            *ptr_Nombre2 = mensaje;
        }}
    if (primero == "P"){
        std::string numero;
        numero += texto[1];
        std::string mensaje;
        int i = 2;
        while(true){
            if(texto[i] != NULL){
                mensaje += texto[i];
                i += 1;

            }
            else
                break;
        }
        if(numero == "1"){
            *Puntaje1 = mensaje;
        }
        else{
            *Puntaje2 = mensaje;
        }}
    if (primero == "T"){
        std::string numero;
        numero += texto[1];
        *ptr_turno = numero;
    }
    if (primero == "M"){

        std::string mensaje;
        int i = 1;
        while(true){
            if(texto[i] != NULL){
                mensaje += texto[i];
                i += 1;

            }
            else
                break;
        }
        *ptr_mensaje = mensaje;
    }
    if(primero == "S"|| primero == "N"){
        son_iguales(mensaje);
    }
    if(primero == "A" || primero == "B"){
        std::string posicion;
        posicion += mensaje[1];
        posicion +=mensaje[2];
        posicion +=mensaje[3];

        if (primero== "A"){
            cambien_carta_1(posicion,texto);
            //std::cout<<"POSICION"<<posicion<<std::endl;
        }
        if (primero== "B"){
            cambien_carta_2(posicion,texto);
            //std::this_thread::sleep_for(std::chrono::milliseconds(3000));



            //std::cout<<"POSICION"<<posicion<<std::endl;

        }

    }
    if(primero == "E"){
        carga_imagen_reverso_encontrada(texto);
    }
    if(primero == "R"){
        carga_imagen_reverso(texto);
    }


}

std::string Lectura_Mensajes::char_a_string(char *texto) {
    std::string mensaje;
    int i = 0;
    while(true){
        if(texto[i] != NULL){
            mensaje += texto[i];
            i += 1;

        }
        else
            break;
    }

    return mensaje;
}

void Lectura_Mensajes::setptrseleccionar_jugador2(bool *Entrada_ptrseleccionar_jugador2) {
    this->ptrseleccionar_jugador2 = Entrada_ptrseleccionar_jugador2;

}

bool *Lectura_Mensajes::getptrseleccionar_jugador2() {
    return this->ptrseleccionar_jugador2;
}
void Lectura_Mensajes::setptrseleccionado_jugadores(bool *Entrada_ptrseleccionado_jugadores) {
    this->ptrseleccionado_jugadores = Entrada_ptrseleccionado_jugadores;
}

void Lectura_Mensajes::setptrjugando(bool *Entrada_ptrjugando) {
    this->ptrjugando = Entrada_ptrjugando;

}

void Lectura_Mensajes::carga_imagen_reverso(char mensaje[203097]) {


    std::ofstream datos_img_reverso("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\datos_reverso.txt",std::ios::out|std::ios::binary);
    if(!datos_img_reverso.good()){
        std::cout<<"ERROR";}
    for (int i = 1; i <= 203097; i = i + 1) {
        datos_img_reverso.put(mensaje[i]);


    }
    datos_img_reverso.close();
    reverso = false;


}
void Lectura_Mensajes::carga_imagen_reverso_encontrada(char mensaje[203097]) {


    std::ofstream datos_img_reverso_encontrada("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\datos_reverso_encontrada.txt",std::ios::out|std::ios::binary);
    if(!datos_img_reverso_encontrada.good()){
        std::cout<<"ERROR";}
    for (int i = 1; i <= 203097; i = i + 1) {
        datos_img_reverso_encontrada.put(mensaje[i]);


    }
    datos_img_reverso_encontrada.close();
    reverso = false;


}

void Lectura_Mensajes::cambien_carta_1(std::string posicion, char *texto) {
    std::ofstream datos_img1("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\imagen1.txt",std::ios::out|std::ios::binary);
    if(!datos_img1.good()){
        std::cout<<"ERROR";}
    for (int i = 4; i <= 203097; i = i + 1) {
        datos_img1.put(texto[i]);
    }
    ptr_Tarjetas->cambieruta(posicion,"1");
    datos_img1.close();

}

void Lectura_Mensajes::cambien_carta_2(std::string posicion, char *texto) {
    std::ofstream datos_img2("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\Archivos_texto\\imagen2.txt",std::ios::out|std::ios::binary);
    if(!datos_img2.good()){
        std::cout<<"ERROR";}
    for (int i = 4; i <= 203097; i = i + 1) {
        datos_img2.put(texto[i]);
    }
    ptr_Tarjetas->cambieruta(posicion,"2");
    datos_img2.close();


    //std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    *ptr_igual = true;
}

void Lectura_Mensajes::son_iguales(std::string mensaje) {
    std::string son;
    son += mensaje[0];
    std::string posicion1;
    posicion1 += mensaje[5];
    posicion1 += mensaje[6];
    posicion1 += mensaje[7];
    std::string posicion2;
    posicion2 += mensaje[8];
    posicion2 += mensaje[9];
    posicion2 += mensaje[10];
    std::cout<<posicion1<<"**"<<posicion2<<std::endl;
    //std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    if(son == "S"){
        //std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        std::cout<<"**********"<<std::endl;
        ptr_Tarjetas->cambieruta(posicion1,"3");
        ptr_Tarjetas->cambieruta(posicion2,"3");
    }
    else{
        //std::this_thread::sleep_for(std::chrono::milliseconds(3000));
        ptr_Tarjetas->cambieruta(posicion1,"0");
        ptr_Tarjetas->cambieruta(posicion2,"0");
    }

}



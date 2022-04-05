
// Created by deyla on 22/3/2022.
//

#include <iostream>
#include <fstream>
#include "Lectura_Mensajes.h"

void Lectura_Mensajes::mensaje_entrante(char *texto) {
    std::string primero;
    primero += texto[0];
    if (primero == "J"){
        std::string numero;
        numero += texto[1];
        asigna_nombre_jugador(numero,texto);}

    if (primero == "R"){

        da_imagen_reverso("R");

    }
    if (primero == "E"){

        da_imagen_reverso("E");

    }
    if (primero == "I"){
        std::string iguales = logica->son_iguales();
        if(iguales == "SI SON"){
            *ptrmensaje_a_enviar =  "SiSon"+logica->posicion1+logica->posicion2;
            logica->posicion1 = "";
            logica->posicion2 = "";
        }
        else{
            *ptrmensaje_a_enviar =  "NoSon"+logica->posicion1+logica->posicion2;
            logica->posicion1 = "";
            logica->posicion2 = "";

        }

    }
    primero = texto[1];
    if(primero == ":"){
        std::string posicion;
        posicion = texto;
        std::cout<<posicion<<std::endl;
        *ptrmensaje_a_enviar = logica->deme_tarjeta(posicion);
        std::cout<<"medieron una posicion"<<std::endl;


    }

}

void Lectura_Mensajes::setptrmensaje_a_enviar(std::string *Entrada_ptrmensaje_a_enviar) {
    this->ptrmensaje_a_enviar = Entrada_ptrmensaje_a_enviar;


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

void Lectura_Mensajes::asigna_nombre_jugador(std::string cualjugador,char *texto) {
    std::string nombre;
    int i = 2;
    while(true){
        if(texto[i] != NULL){
            nombre += texto[i];
            i += 1;

        }
        else
            break;
    }
    std::cout<<nombre;
    if(cualjugador == "1"){
        datos->Nombre_jugador1 = nombre;
        *ptrmensaje_a_enviar = "Jugador_1_RECIBIDO";
    }
    if(cualjugador == "2"){
        datos->Nombre_jugador2 = nombre;
        *ptrmensaje_a_enviar = "Jugador_2_RECIBIDO";
    }

}

void Lectura_Mensajes::da_imagen_reverso(std::string prefijo) {
    std::string ruta;
    if(prefijo == "R"){
        ruta ="C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Imagenes\\Reverso_Carta.png";

    }
    else{
        ruta = "C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Imagenes\\Reverso_Carta_encontrada.png";
    }

    std::ifstream image(ruta,std::ios::in| std::ios::binary);
    if(!image.good()){
        std::cout<<"ERROR";
    }
    std::ofstream binary("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Imagenes\\binario_imagen.txt",std::ios::out|std::ios::binary);
    if(!image.good()){
        std::cout<<"ERROR";}
    // std::cout<<"ihol"<<std::endl;*/
    char ch;
    std::string texto = "";
    while(!image.eof()){

        ch = image.get();
        texto += ch;
        //std::cout<<ch<<std::endl;
        binary.put(ch);
    }
    //std::cout<<texto;
    image.close();

    *ptrmensaje_a_enviar = prefijo+texto;

}

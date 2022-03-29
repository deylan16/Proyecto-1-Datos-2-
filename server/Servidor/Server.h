//
// Created by deyla on 16/3/2022.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <winsock2.h>
#include <iostream>
#include "Lectura_Mensajes.h"

class Server {
public:
    Datos_juego *datos = Datos_juego::GetInstance("Informacion");
    WSADATA WSAData;
    SOCKET server, client;
    Lectura_Mensajes *lector = new Lectura_Mensajes();
    SOCKADDR_IN serverAddr, clientAddr;
    std::string mensaje_a_enviar = "";
    std::string *ptrmensaje_a_enviar = &mensaje_a_enviar;
    char buffer[203097];
    Server();
    std::string Recibir();
    void Enviar(std::string mensaje);
    void CerrarSocket();
};


#endif //SERVER_SERVER_H

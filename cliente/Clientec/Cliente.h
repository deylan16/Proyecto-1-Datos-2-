//
// Created by deyla on 16/3/2022.
//

#ifndef CLIENTE_CLIENTE_H
#define CLIENTE_CLIENTE_H
#include <iostream>
#include <winsock2.h>
#include "Lectura_Mensajes.h"

class Cliente {
public:
    Lectura_Mensajes *lector;
    WSADATA WSAData;
    SOCKET server;
    SOCKADDR_IN addr;
    char buffer[1024];

    Cliente(Lectura_Mensajes *Entrada_lector);
    void Enviar(std::string mensaje);
    void Recibir();
    void CerrarSocket();
};


#endif //CLIENTE_CLIENTE_H

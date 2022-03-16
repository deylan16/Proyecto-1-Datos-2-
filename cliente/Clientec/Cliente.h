//
// Created by deyla on 16/3/2022.
//

#ifndef CLIENTE_CLIENTE_H
#define CLIENTE_CLIENTE_H
#include <iostream>
#include <winsock2.h>

class Cliente {
public:
    WSADATA WSAData;
    SOCKET server;
    SOCKADDR_IN addr;
    char buffer[1024];

    Cliente();
    void Enviar();
    void Recibir();
    void CerrarSocket();
};


#endif //CLIENTE_CLIENTE_H

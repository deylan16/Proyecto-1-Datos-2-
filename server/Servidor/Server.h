//
// Created by deyla on 16/3/2022.
//

#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H
#include <winsock2.h>
#include <iostream>

class Server {
public:
    WSADATA WSAData;
    SOCKET server, client;
    SOCKADDR_IN serverAddr, clientAddr;
    char buffer[1024];
    Server();
    std::string Recibir();
    void Enviar();
    void CerrarSocket();
};


#endif //SERVER_SERVER_H

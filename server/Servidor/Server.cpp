//
// Created by deyla on 16/3/2022.
//

#include "Server.h"
#include <iostream>

Server::Server() {
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);

    serverAddr.sin_addr.s_addr = INADDR_ANY;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(5555);

    bind(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
    listen(server, 0);

    std::cout << "Escuchando para conexiones entrantes." << std::endl;
    int clientAddrSize = sizeof(clientAddr);
    if((client = accept(server, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
    {
        std::cout << "Cliente conectado!" << std::endl;
    }
}

std::string Server::Recibir() {
    recv(client, buffer, sizeof(buffer), 0);
    std::cout << "El cliente dice: " << buffer << std::endl;
    memset(buffer, 0, sizeof(buffer));
}

void Server::Enviar() {
    std::cout<<"Escribe el mensaje a enviar: ";
    std::cin>>this->buffer;
    send(client, buffer, sizeof(buffer), 0);
    memset(buffer, 0, sizeof(buffer));
    std::cout << "Mensaje enviado!" <<  std::endl;

}

void Server::CerrarSocket() {
    closesocket(client);
    std::cout << "Socket cerrado, cliente desconectado." << std::endl;
}

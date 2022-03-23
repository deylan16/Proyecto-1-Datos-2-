//
// Created by deyla on 16/3/2022.
//

#include "Cliente.h"
#include <iostream>
#include <winsock2.h>

using namespace std;

Cliente::Cliente(Lectura_Mensajes *Entrada_lector) {
    lector = Entrada_lector;
    cout<<"Conectando al servidor..."<<endl<<endl;
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);
    addr.sin_addr.s_addr = inet_addr("192.168.1.106");
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5555);
    connect(server, (SOCKADDR *)&addr, sizeof(addr));
    cout << "Conectado al Servidor!" << endl;
}

void Cliente::Enviar(std::string mensaje) {
    //cout<<"Escribe el mensaje a enviar: ";
    for (int i = 0; i <= mensaje.length(); i = i + 1) {
        this->buffer[i] = mensaje[i];

    }

    send(server, buffer, sizeof(buffer), 0);

    memset(buffer, 0, sizeof(buffer));

    //cout << "Mensaje enviado!" << endl;
    this->Recibir();
}

void Cliente::Recibir() {
    recv(server, buffer, sizeof(buffer), 0);
    //cout << "El servidor dice: " << buffer << endl;
    std::cout<<"cliente"<<lector->getptrseleccionar_jugador2()<<"\n";
    lector->mensaje_entrante(buffer);
    std::cout<<"cliente2"<<lector->getptrseleccionar_jugador2()<<"\n";
    memset(buffer, 0, sizeof(buffer));
}

void Cliente::CerrarSocket() {
    closesocket(server);
    WSACleanup();
    cout << "Socket cerrado." << endl << endl;

}

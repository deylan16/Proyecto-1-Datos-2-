#include <iostream>
#include "Servidor/Server.h"

int main() {
    Server *Servidor = new Server();
    while(true)
    {
        Servidor->Recibir();
        //Servidor->Enviar();
    }
}

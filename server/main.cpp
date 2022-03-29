#include <iostream>
#include <fstream>
#include "Servidor/Server.h"
#include "Servidor/Datos_juego.h"

int main() {


    std::ifstream archivo("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\server\\Tarjetas\\informcaion_tarjetas.txt");
    if(!archivo.good()){
        std::cout<<"ERROR";
    }
    std::string linea;
    while (getline(archivo, linea)) {
        // Lo vamos imprimiendo
        std::cout << "Una linea: ";
        std::cout << linea[0] << std::endl;
    }

    /*Server *Servidor = new Server();
    while(true)
    {
        Servidor->Recibir();
        //Servidor->Enviar();
    }*/

}

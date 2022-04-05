//
// Created by deyla on 31/3/2022.
//

#ifndef SERVER_MATRIZ_DISCO_H
#define SERVER_MATRIZ_DISCO_H


#include <mutex>
#include "Matriz_memoria.h"
#include "Tarjetas_Cargadas.h"

class Matriz_disco {
private:
    static Matriz_disco * pinstance_;
    static std::mutex mutex_;


protected:
    Matriz_disco(const std::string value): value_(value)
    {
    }
    ~Matriz_disco() {}
    std::string value_;
public:

    Matriz_disco(Matriz_disco &other) = delete;
    void operator=(const Matriz_disco &) = delete;
    static Matriz_disco *GetInstance(const std::string& value);
    void SomeBusinessLogic()
    {
        // ...
    }
    std::string value() const{
        return value_;
    }
    int espacio_en_tarjetas = 0;

    Tarjetas_Cargadas *ptr_tarjetascargadas[20];
    Matriz_memoria *matriz_en_memoria = Matriz_memoria::GetInstance("Informacion");

    void iniciamatriz();

    std::basic_string<char> deme_la_imagen(std::string posicion);
    Tarjetas_Cargadas * cargarTarjeta(std::string posicion, std::string informacion);
    std::string estacargada(std::string posicion);
    std::string deme_la_tipo(std::string posicion);

};


#endif //SERVER_MATRIZ_DISCO_H

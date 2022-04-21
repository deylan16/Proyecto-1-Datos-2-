//
// Created by deyla on 4/4/2022.
//

#ifndef SERVER_LOGICA_JUEGO_H
#define SERVER_LOGICA_JUEGO_H
#include <mutex>
#include "../Tarjetas/Matriz_disco.h"

class Logica_juego {
private:
    static Logica_juego * pinstance_;
    static std::mutex mutex_;


protected:
    Logica_juego(const std::string value): value_(value)
    {
    }
    ~Logica_juego() {}
    std::string value_;
public:

    Logica_juego(Logica_juego &other) = delete;
    void operator=(const Logica_juego &) = delete;
    static Logica_juego *GetInstance(const std::string& value);
    void SomeBusinessLogic()
    {
        // ...
    }
    std::string value() const{
        return value_;
    }
    Datos_juego *datos = Datos_juego::GetInstance("Informacion");
    std::string posicion1;
    std::string posicion2;
    std::string mensaje;
    Matriz_disco *matriz_disco = Matriz_disco::GetInstance("Informacion");
    std::string deme_tarjeta(std::string posicion);
    std::string son_iguales();
    void poderes(std::string tipo);
};


#endif //SERVER_LOGICA_JUEGO_H

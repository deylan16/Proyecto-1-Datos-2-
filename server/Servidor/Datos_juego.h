//
// Created by deyla on 22/3/2022.
//

#ifndef SERVER_DATOS_JUEGO_H
#define SERVER_DATOS_JUEGO_H


#include <mutex>

class Datos_juego {
private:
    static Datos_juego * pinstance_;
    static std::mutex mutex_;


protected:
    Datos_juego(const std::string value): value_(value)
    {
    }
    ~Datos_juego() {}
    std::string value_;
public:

    Datos_juego(Datos_juego &other) = delete;
    void operator=(const Datos_juego &) = delete;
    static Datos_juego *GetInstance(const std::string& value);
    void SomeBusinessLogic()
    {
        // ...
    }
    std::string value() const{
        return value_;
    }

    //******************************
    std::string Nombre_jugador1;
    std::string Nombre_jugador2;
    int Nombre_jugador1;
    int puntaje_jugador2;
};






#endif //SERVER_DATOS_JUEGO_H

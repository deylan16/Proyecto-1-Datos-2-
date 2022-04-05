//
// Created by deyla on 29/3/2022.
//

#ifndef CLIENTE_PTRTARJETAS_H
#define CLIENTE_PTRTARJETAS_H


#include "Tarjeta.h"
#include <mutex>
class PtrTarjetas {
private:
    static PtrTarjetas * pinstance_;
    static std::mutex mutex_;


protected:
    PtrTarjetas(const std::string value): value_(value)
    {
    }
    ~PtrTarjetas() {}
    std::string value_;
public:

    PtrTarjetas(PtrTarjetas &other) = delete;
    void operator=(const PtrTarjetas &) = delete;
    static PtrTarjetas *GetInstance(const std::string& value);
    void SomeBusinessLogic()
    {
        // ...
    }
    std::string value() const{
        return value_;
    }


    Tarjeta *ptr_tarjetas2[8][8];

    void set_ptrtarjeta(int i,int j,Tarjeta *tarjeta);
    void cambieruta(std::string posicion,std::string numerocarta);

};


#endif //CLIENTE_PTRTARJETAS_H

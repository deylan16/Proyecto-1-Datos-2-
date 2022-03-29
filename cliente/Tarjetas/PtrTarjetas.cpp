//
// Created by deyla on 29/3/2022.
//

#include <iostream>
#include "PtrTarjetas.h"
PtrTarjetas* PtrTarjetas::pinstance_{nullptr};
PtrTarjetas *PtrTarjetas::GetInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new PtrTarjetas(value);
    }
    return pinstance_;
}



void PtrTarjetas::set_ptrtarjeta(int i,int j,Tarjeta *tarjeta) {

    ptr_tarjetas2[i][j] = {tarjeta};

}

std::mutex PtrTarjetas::mutex_;
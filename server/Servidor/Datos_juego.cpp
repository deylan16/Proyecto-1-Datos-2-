//
// Created by deyla on 22/3/2022.
//

#include "Datos_juego.h"

Datos_juego* Datos_juego::pinstance_{nullptr};

Datos_juego *Datos_juego::GetInstance(const std::string &value) {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr)
    {
        pinstance_ = new Datos_juego(value);
    }
    return pinstance_;
}

std::mutex Datos_juego::mutex_;

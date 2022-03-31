//
// Created by deyla on 31/3/2022.
//

#ifndef SERVER_MATRIZ_MEMORIA_H
#define SERVER_MATRIZ_MEMORIA_H


#include <mutex>

class Matriz_memoria {
private:
    static Matriz_memoria * pinstance_;
    static std::mutex mutex_;


protected:
    Matriz_memoria(const std::string value): value_(value)
    {
    }
    ~Matriz_memoria() {}
    std::string value_;
public:

    Matriz_memoria(Matriz_memoria &other) = delete;
    void operator=(const Matriz_memoria &) = delete;
    static Matriz_memoria *GetInstance(const std::string& value);
    void SomeBusinessLogic()
    {
        // ...
    }
    std::string value() const{
        return value_;
    }

    std::string tipos[64]  ={"Ash","Bangalore","Bloodhound","Caustic","Crypto","Fuse","Gibraltar","Horizon","Lifeline",
                             "Loba","Maggie","Mirage","Octane","Pathfinder","Rampart","Revenant","Seer","Valkyrie",
                             "Wattson","Wraith" ,"Flatline","R-301","Prowler","Volt","Rampage","Devotion","Triple_take",
                             "Bocek","Sentinel","Kraber","Peacekeeper","Mastiff","Ash","Bangalore","Bloodhound","Caustic","Crypto","Fuse","Gibraltar","Horizon","Lifeline",
                             "Loba","Maggie","Mirage","Octane","Pathfinder","Rampart","Revenant","Seer","Valkyrie",
                             "Wattson","Wraith" ,"Flatline","R-301","Prowler","Volt","Rampage","Devotion","Triple_take",
                             "Bocek","Sentinel","Kraber","Peacekeeper","Mastiff"}
    ;
    void generar_matriz();
    std::string demetarjeta(std::string posicion);
    void cambiaestadotarjeta(std::string posicion);

};


#endif //SERVER_MATRIZ_MEMORIA_H

#include <iostream>
#include "Clientec/Cliente.h"

int main() {
    Cliente *Cliente = new class Cliente();
    while(true)
    {
        Cliente->Enviar();
        Cliente->Recibir();
    }
}

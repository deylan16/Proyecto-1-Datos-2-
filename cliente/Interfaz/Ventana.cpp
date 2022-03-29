//
// Created by deyla on 16/3/2022.
//

#include "Ventana.h"
#include "../Tarjetas/Tarjeta.h"
#include "../Tarjetas/PtrTarjetas.h"
#include <SFML/Graphics.hpp>
#include <fstream>


void Ventana::ventana_principal() {

    // Creamos una textura
    /*sf::Texture textura;


    std::ifstream image("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\,std::ios::in| std::ios::binary);
    if(!image.good()){
        std::cout<<"ERROR";
    }
    std::ofstream binary("C:\\Users\\deyla\\OneDrive\\Escritorio\\Proyecto 1 Datos 2\\Proyecto-1-Datos-2-\\cliente\\binerio_imagen.txt",std::ios::out|std::ios::binary);
    if(!image.good()){
        std::cout<<"ERROR";}
   // std::cout<<"ihol"<<std::endl;
    char ch;
    std::string texto = "";
    while(!image.eof()){

        ch = image.get();
        texto += ch;
        //std::cout<<ch<<std::endl;
        binary.put(ch);
    }
    //std::cout<<texto;
    image.close();
    binary.close();*/




    /*s*/




    while (ptrwindow->isOpen())
    {

        //componentes->setWindow(window);
        int mousex =sf::Mouse::getPosition(*ptrwindow).x;
        int mousey = sf::Mouse::getPosition( *ptrwindow).y;
        sf::Event Event{};
        event = Event;
        componentes->setPtrwindow(ptrwindow);
        componentes->setevent(event);
        componentes->ptrescibiendo = &escribiendo;
        componentes->setposicion_mouse(mousex,mousey);

        int contadorborrar = 1;
        while (ptrwindow->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ptrwindow->close();

            if (escribiendo){

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) ){
                    if(contadorborrar == 1)
                        entrada.append("a");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::B) ){
                    if(contadorborrar == 1)
                        entrada.append("b");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) ){
                    if(contadorborrar == 1)
                        entrada.append("c");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) ){
                    if(contadorborrar == 1)
                        entrada.append("d");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::E) ){
                    if(contadorborrar == 1)
                        entrada.append("e");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::F) ){
                    if(contadorborrar == 1)
                        entrada.append("f");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::G) ){
                    if(contadorborrar == 1)
                        entrada.append("g");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::H) ){
                    if(contadorborrar == 1)
                        entrada.append("h");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::I) ){
                    if(contadorborrar == 1)
                        entrada.append("i");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::J) ){
                    if(contadorborrar == 1)
                        entrada.append("j");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::K) ){
                    if(contadorborrar == 1)
                        entrada.append("k");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::L) ){
                    if(contadorborrar == 1)
                        entrada.append("l");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::M) ){
                    if(contadorborrar == 1)
                        entrada.append("m");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::N) ){
                    if(contadorborrar == 1)
                        entrada.append("n");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::O) ){
                    if(contadorborrar == 1)
                        entrada.append("o");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::P) ){
                    if(contadorborrar == 1)
                        entrada.append("p");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q) ){
                    if(contadorborrar == 1)
                        entrada.append("q");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::R) ){
                    if(contadorborrar == 1)
                        entrada.append("r");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) ){
                    if(contadorborrar == 1)
                        entrada.append("s");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::T) ){
                    if(contadorborrar == 1)
                        entrada.append("t");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::U) ){
                    if(contadorborrar == 1)
                        entrada.append("u");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::V) ){
                    if(contadorborrar == 1)
                        entrada.append("v");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) ){
                    if(contadorborrar == 1)
                        entrada.append("w");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::X) ){
                    if(contadorborrar == 1)
                        entrada.append("x");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Y) ){
                    if(contadorborrar == 1)
                        entrada.append("y");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z) ){
                    if(contadorborrar == 1)
                        entrada.append("z");
                    contadorborrar = contadorborrar -1;
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace) ){
                    if(contadorborrar == 1)
                        if(entrada != "")
                            entrada.pop_back();
                    contadorborrar = contadorborrar -1;
                }
            }
        }
        ptrwindow->clear();
       //
        if(seleccionado_jugadores)
            seleccion_jugadores();
        if(jugando)
            juego();

        ptrwindow->display();

    }

}

Ventana::Ventana(Cliente Scliente1, sf::RenderWindow *window) {
    this->Scliente = &Scliente1;
    this->ptrwindow = window;


}

void Ventana::seleccion_jugadores() {
    std::string texto_indicador_quien_seleciona = "Jugador 1 ingresa tu nombre";
    if (seleccionar_jugador2){
        texto_indicador_quien_seleciona = "Jugador 2 ingresa tu nombre";
    }
    componentes->creaLabel(100,200,30,texto_indicador_quien_seleciona);
    componentes->creaLabel(280,0,50,"Bienvenido al  juego \n         MEMORIA");
    componentes->creaCajadeTexto(100,250,400,30,entrada);
    if(componentes->creaBoton(100, 280, 100, 30, "Aceptar")){
        contador_botones -= 1;//sintaxis porque sino lo envia 4 veces
        if (contador_botones == 0){
            if(not seleccionar_jugador2){
                std::cout<<"!";
                Scliente->Enviar("J1"+entrada);
                entrada = "";
            }
            if(seleccionar_jugador2){
                if (entrada != ""){
                    Scliente->Enviar("J2"+entrada);
                    entrada = "";
                }

        }
            //seleccionar_jugador2 = true;
            contador_botones = 4;//sintaxis porque sino lo envia 4 veces
        }
    }





    }

void Ventana::juego() {
    PtrTarjetas *ptr_Tarjetas = PtrTarjetas::GetInstance("Informacion");
    if(carga_ing_reverso){
        Scliente->Enviar("R");
        carga_ing_reverso = false;

        for (int i = 0; i <= 8; i = i + 1){
            for (int j = 0; j <= 8; j = j + 1){
                Tarjeta *tarjeta1 = new Tarjeta();
                tarjeta1->setPtrwindow(ptrwindow);
                std::string f_C= std::to_string(i) +":"+std::to_string(j);
                std::cout<<f_C;
                tarjeta1->fila_columna = f_C;
                ptr_Tarjetas->set_ptrtarjeta(i,j,tarjeta1);



            }

        }
    }


    int mousex =sf::Mouse::getPosition(*ptrwindow).x;
    int mousey = sf::Mouse::getPosition( *ptrwindow).y;
    int ubicaionx = 0;
    int ubicaiony = -110;




    for (int i = 0; i <= 8; i = i + 1){
        ubicaionx = 0;
        ubicaiony += 110;
        for (int j = 0; j <= 8; j = j + 1){
            ptr_Tarjetas->ptr_tarjetas2[i][j]->setposicion_mouse(mousex,mousey);
            if(ptr_Tarjetas->ptr_tarjetas2[i][j]->creaBoton(ubicaionx, ubicaiony, 70, 100)){
                //contador_botones2 -= 1;//sintaxis porque sino lo envia 4 veces
                std::cout<<ptr_Tarjetas->ptr_tarjetas2[i][j]->fila_columna;
                /*if (contador_botones == 0){

                    //seleccionar_jugador2 = true;
                    contador_botones2 = 4;//sintaxis porque sino lo envia 4 veces
                }*/
            }
            ubicaionx += 100;
    }
    }



}



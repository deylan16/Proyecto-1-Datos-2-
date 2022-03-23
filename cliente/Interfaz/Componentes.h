//
// Created by deyla on 21/3/2022.
//

#ifndef CLIENTE_COMPONENTES_H
#define CLIENTE_COMPONENTES_H




class Componentes {
public:
    bool *ptrescibiendo;
    std::string entrada_texto;
    sf::Event event;
    sf::RenderWindow *ptrwindow ;
    int mousex;
    int mousey;



    void setPtrwindow( sf::RenderWindow *window);
    void setevent( sf::Event Event);
    void creaCajadeTexto(int posicionx, int posiciony, int ancho, int alto,std::string texto);
    void setposicion_mouse(int entrada_mousex,int entrada_mousey);
    bool creaBoton(int posicionx, int posiciony, int ancho, int alto,std::string texto);
    void creaLabel(int posicionx, int posiciony, int tamano,std::string texto);
};


#endif //CLIENTE_COMPONENTES_H

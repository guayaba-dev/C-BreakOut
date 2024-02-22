#pragma once
#include "../Renderizador/Renderizador.h"
#include "../GameElement/Pantalla.h"
#include "../Controler/Controler.h"

class GameManager{

    Pantalla pantalla = Pantalla();
    Renderizador renderizador{Renderizador(Vector(25,20), pantalla.elements)};
    //Controler controler
    void gameLoop();

    public:
        int static points;
        GameManager()=default;
        GameManager(Pantalla pantalla);
        void init();
};

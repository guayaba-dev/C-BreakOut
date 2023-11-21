#pragma once
#include "../Rederizador/Renderizador.h"
#include "../Controler/Controler.h"

class GameManager{


    float deltaTime{};
    Renderizador renderizador{Renderizador()};
    //Pantalla pantalla
    //Controler controler

    void update(float deltaTime){}
    void init(){}

    public:
        int static points;





};

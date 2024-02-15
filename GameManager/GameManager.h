#pragma once
#include "../Renderizador/Renderizador.h"
#include "../Controler/Controler.h"
#include "../GameElement/Pantalla.h"

class GameManager{


    float deltaTime{};
    Renderizador renderizador{Renderizador(Vector(50,50))};
    Pantalla pantalla{};
    //Controler controler

    void update(float deltaTime);
    void init(){
        renderizador.draw(pantalla.elements, Vector(0,0));
    };

    public:
        int static points;
        GameManager(){};
        GameManager(Pantalla pantalla){
            this->pantalla = pantalla;
        }




};

#pragma once
#include "../Renderizador/Renderizador.h"
#include "../GameElement/Pantalla.h"
#include "../Controler/Controler.h"

class GameManager{


    float deltaTime{};
    Renderizador renderizador{Renderizador(Vector(25,20))};
    Pantalla pantalla = Pantalla();
    //Controler controler

    void update(float deltaTime);

    public:
        int static points;
        GameManager(){};
        GameManager(Pantalla pantalla){
           this->pantalla = pantalla; 
        }
        void init(){
            renderizador.draw(pantalla.elements, Vector(0,0));
            renderizador.draw();
        };




};

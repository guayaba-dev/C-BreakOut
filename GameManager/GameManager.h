#pragma once
#include "../Renderizador/Renderizador.h"
#include "../GameElement/Pantalla.h"
#include "../Controler/Controler.h"

class GameManager{

    Pantalla pantalla = Pantalla();
    Renderizador renderizador{Renderizador(Vector(25,20), pantalla.elements)};
    //Controler controler

    void gameLoop(){
        double deltaTime{};
        while(1)
        {
            //controler.getInput();
            pantalla.update(deltaTime);
            renderizador.draw(pantalla.elements, Vector(0,0), true);
        }
        
    }

    public:
        int static points;
        GameManager(){};
        GameManager(Pantalla pantalla){
           this->pantalla = pantalla; 
        }
        void init(){
            renderizador.draw(pantalla.elements, Vector(0,0),true);
            gameLoop();
        };




};

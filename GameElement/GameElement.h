#pragma once
#include <iostream>
#include <string>
#include "../Tools/Vector.h"
#include "../Renderizador/Renderizador.h"

class Renderizador;

class GameElement
{

    protected:    
        int static id;
        Vector position;

    public:
         
        virtual void update(double deltaTime){};     
        Vector getPosition(){return this->position;};
        void setPosition(Vector position){this->position = position;}
        virtual void render(Renderizador* renderizador);
};






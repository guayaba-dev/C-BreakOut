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
        
        //GameElement();
        //GameElement(Vector position);
        //virtual void update();
        //virtual void destroy();
        Vector getPosition(){return this->position;};
        void setPosition(Vector position){this->position = position;};
        template <class T >
        T getDrawable();
        int getDrawable(){return 0;};
        
        virtual void example(Renderizador* renderizador);

};






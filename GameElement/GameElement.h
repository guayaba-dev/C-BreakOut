#pragma once
#include "../tools/Vector.h"

class GameElement
{

    public:
        
        int id;
        Vector position;

        GameElement();
        void update();
        void destroy();

};


GameElement::GameElement(){

}








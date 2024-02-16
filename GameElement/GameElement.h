#pragma once
#include <string>
#include "../tools/Vector.h"

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
        };






#pragma once
#include <string>
#include "../tools/Vector.h"

class GameElement
{
    int static id;
    Vector position;

    public:
        
        GameElement();
        GameElement(Vector position);
        virtual void update();
        virtual void destroy();
        virtual Vector getPosition();
        virtual void setPosition(Vector position);
        template <class T >
        T getDrawable();
        int getDrawable();
        };






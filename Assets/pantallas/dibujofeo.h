#include "../../GameElement/Pantalla.h"
#include "../../GameElement/GameObject.h"
#include "../../GameElement/Label.h"


class dibujofeo : public Pantalla
{
private:
    /* data */
public:
    dibujofeo(){


        this->elements.push_back(new Label("Hello World", Vector(20,1)));
        this->elements.push_back(new GameObject(Sprite(4,3,"### ####### "), Vector(12,10)));




    }
};

#include "../../GameElement/Pantalla.h"
#include "../../GameElement/GameObject.h"
#include "../../GameElement/Label.h"


class pantallaFea : public Pantalla
{
private:
    /* data */
public:
    pantallaFea(){
        position = Vector(2,4);
        this->elements.push_back(new Label("Hello World", Vector(19,1)));
        this->elements.push_back(new GameObject(Sprite(3,3,"## ######"), Vector(12,10)));
    }
};

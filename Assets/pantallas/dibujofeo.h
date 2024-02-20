#include "../../GameElement/Pantalla.h"
#include "../../GameElement/GameObject.h"
#include "../../GameElement/Label.h"
#include "../objects/pantallaFea.h"


class dibujofeo : public Pantalla
{
private:
    /* data */
public:
    dibujofeo(){
        this->elements.push_back(new Label("Hello World", Vector(0,0)));
        this->elements.push_back(new GameObject(Sprite(3,3,"### ####### "), Vector(2,2)));
        this->elements.push_back(new pantallaFea());
    }
};

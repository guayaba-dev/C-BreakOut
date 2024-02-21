#include "../../GameElement/Pantalla.h"
#include "../../GameElement/GameObject.h"
#include "movingLetters.h"


class pantallaFea : public Pantalla
{
private:
    /* data */
public:
    pantallaFea(){
        position = Vector(2,4);
        this->elements.push_back(new movingLetters());
        this->elements.push_back(new GameObject(Sprite(3,3,"## ######"), Vector(12,10)));
    }
};

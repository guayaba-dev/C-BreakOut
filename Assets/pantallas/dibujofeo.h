#include "../GameElement/Pantalla.h"
#include "../GameElement/GameObject.h"
#include "../GameElement/Label.h"


class dibujofeo : public Pantalla
{
private:
    /* data */
public:
    dibujofeo(){
        
        this->elements.push_back(GameObject(Sprite(4,3,"##########"), Vector(5,5)));
        this->elements.push_back(Label("Hello World", Vector(1,1)));




    }
};

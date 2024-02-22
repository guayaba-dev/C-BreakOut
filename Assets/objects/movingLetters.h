#include "../../GameElement/Label.h"

class movingLetters : public Label
{
public:
    movingLetters(){
        this->message = "Hola Mundo";
        this->position = Vector(0,0);
    }

    void update(double deltaTime){
        position.x += 0.02;
        if(position.x > 25){
            position.x = 0;
        }
    }
};


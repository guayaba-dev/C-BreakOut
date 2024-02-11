#include "GameElement.h"
#include "../Tools/Sprite.h"

class GameObject : public GameElement
{

    Sprite sprite{};

    public:

        Sprite getDrawable();
        bool isColliding();
    

};



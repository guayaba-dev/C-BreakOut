#pragma once
#include "GameElement.h"
#include "../Tools/Sprite.h"

class GameObject : public GameElement
{

    Sprite sprite{};

    public:

        GameObject();
        GameObject(Sprite sprite, Vector position);
        Sprite getDrawable();
        bool isColliding();
        void render(Renderizador* renderizador) override;
        virtual void update(double deltaTime) override{};

};



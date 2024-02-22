#pragma once
#include "../GameElement/GameElement.h"
#include <vector>


class Pantalla : public GameElement
{

public:
    Pantalla()=default;
    std::vector<GameElement*> elements{};
    std::vector<GameElement*> getDrawable();
    void render(Renderizador* renderizador) override;    
    void update(double deltaTime) override;
};









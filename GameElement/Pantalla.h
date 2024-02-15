#pragma once
#include "../GameElement/GameElement.h"
#include <vector>


class Pantalla : public GameElement
{

public:

    std::vector<GameElement> elements{};

    Pantalla();

    std::vector<GameElement> getDrawable();

};









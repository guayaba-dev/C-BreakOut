#pragma once
#include "../GameElement/GameElement.h"
#include <vector>


class Pantalla : public GameElement<std:::vector<GameElement>>
{

public:

    std::vector<GameElement> elements{};

    Pantalla();

    std::vector getDrawable() override;

};









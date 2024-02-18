#pragma once
#include "../GameElement/GameElement.h"
#include <vector>


class Pantalla : public GameElement
{

public:

    Pantalla()=default;

    std::vector<GameElement*> elements{};

    std::vector<GameElement*> getDrawable();

    void example(Renderizador* renderizador) override {

        renderizador->draw(elements,position);


    }    

};









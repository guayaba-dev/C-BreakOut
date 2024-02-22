#pragma once
#include "GameElement.h"


class Label : public GameElement
{

public:

    std::string message{""};

    Label()=default;
    Label(std::string message);
    Label(std::string message, Vector position); 
    void render(Renderizador* renderizador) override;
    virtual void update(double deltaTime) override{};

};










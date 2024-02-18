#pragma once
#include "GameElement.h"


class Label : public GameElement
{

public:

    std::string message{""};

    Label();
    Label(std::string message);
    Label(std::string message, Vector position){

        this->message = message;
        this->position = position;
    };
    std::string getDrawable();

    void example(Renderizador* renderizador) override {


        renderizador->draw(message,position);
    };

};










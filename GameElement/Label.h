#pragma once
#include "GameElement.h"
#include <iostream>


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

};










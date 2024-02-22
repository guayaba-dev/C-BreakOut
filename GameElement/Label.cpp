#include "Label.h"

Label::Label(std::string message, Vector position){
        this->message = message;
        this->position = position;
};

Label::Label(std::string message){
        this->message = message; 
};


void Label::render(Renderizador* renderizador){
        renderizador->draw(message,position);
    };
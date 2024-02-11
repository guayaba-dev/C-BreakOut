#include <vector>
#include "Renderizador.h"

void Renderizador::draw(std::vector<GameElement> elements, Vector position){

    for(auto& element : elements){ 

        this->draw(element.getDrawable(), element.getPosition());
        
    }

};


void Renderizador::draw(std::string message, Vector position){

};
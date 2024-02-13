#include <vector>
#include "Renderizador.h"

void Renderizador::draw(std::vector<GameElement> elements, Vector position){

    for(auto element : elements){ 

        Vector elementPosition = element.getPosition();
        elementPosition.x += position.x;
        elementPosition.y += position.y;

        this->draw(element.getDrawable(), elementPosition);
        
    }

};


void Renderizador::draw(std::string message, Vector position){

    int bufferPosition = (position.y * size.x) + position.x;


    for(char chara : message){
        
        this->nextBuffer.assign(bufferPosition, chara);  

        if (!(bufferPosition - (position.y * size.x) < this->size.x)){
            return;
        }
          bufferPosition++; 
    }

};
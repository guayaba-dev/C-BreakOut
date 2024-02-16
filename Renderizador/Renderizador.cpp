#include <iostream>
#include <vector>
#include "Renderizador.h"

Renderizador::Renderizador(Vector size){

    this->size = size;

}

void Renderizador::draw(std::vector<GameElement> elements, Vector position){

    for(auto element : elements){ 

        Vector elementPosition = element.getPosition();
        elementPosition.x += position.x;
        elementPosition.y += position.y;

        this->draw(element.getDrawable(), elementPosition);

    }
    
    std::vector<char> swapAux = nextBuffer;
    nextBuffer.clear();
    currentBuffer = swapAux;

    for(int i; i < currentBuffer.size(); i++){

        const char* nextCharacter = (i != size.x)? currentBuffer.at(i) + "" : currentBuffer.at(i) + "\n";
        std::cout << nextCharacter;

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


void Renderizador::draw(Sprite sprite, Vector position){

    int bufferPosition{};
    Vector spriteCursor{};

    for(char chara : sprite.image){
                
        bufferPosition = ((position.y + spriteCursor.y) * size.x) + position.x + spriteCursor.x;

        spriteCursor = (spriteCursor.x < sprite.size.x) ? Vector(spriteCursor.x+1, spriteCursor.y): Vector(spriteCursor.x, spriteCursor.y+1);

        if (!(bufferPosition - ((position.y + spriteCursor.y) * size.x) < this->size.x)){
            continue;
        }

        if (!((bufferPosition - spriteCursor.x - position.x)/size.x < this->size.x)){
            return;
        }  

        this->nextBuffer.assign(bufferPosition, chara);

    }

};
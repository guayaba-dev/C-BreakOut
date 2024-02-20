#pragma once
#include <vector>
#include <string>
#include "../Tools/Sprite.h"
#include "../GameElement/GameElement.h"

class GameElement;

class Renderizador
{
    std::vector<char> currentBuffer;
    std::vector<char> nextBuffer;

    Vector size;

    public: 
        Renderizador(Vector size);
        void draw(std::vector<GameElement*>&elements, Vector position);
        void draw(Sprite sprite, Vector position);
        void draw(std::string message, Vector position);  
        void draw(); 
        };

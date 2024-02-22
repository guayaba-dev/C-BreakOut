#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "../Tools/Sprite.h"
#include "../Tools/FrameBuffer.h"
#include "../GameElement/GameElement.h"

class GameElement;

class Renderizador
{
    FrameBuffer currentBuffer;
    FrameBuffer nextBuffer;
    std::vector<GameElement*> elements;
    Vector size;

    public: 
        Renderizador(Vector size, std::vector<GameElement*> elements);
        void setElements(std::vector<GameElement*>&elements);
        void draw(std::vector<GameElement*>&elements, Vector position, bool main);
        void draw(Sprite sprite, Vector position);
        void draw(std::string message, Vector position);  
        void draw(); 
        void swap();
        void render();
        };

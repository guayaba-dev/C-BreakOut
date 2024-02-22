#include "Sprite.h"

Sprite::Sprite(float x, float y){
    this->size.x = x;
    this->size.y = y; 
};

Sprite::Sprite(float x, float y, std::string image){
    this->size.x = x;
    this->size.y = y;
    this->image = image; 
};
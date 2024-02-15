#include "GameObject.h"

Sprite GameObject::getDrawable(){ 
    return sprite;
};


GameObject::GameObject(Sprite sprite, Vector position){

    this->sprite = sprite;
    this->position = position;

};
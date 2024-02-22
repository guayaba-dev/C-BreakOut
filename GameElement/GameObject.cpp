#include "GameObject.h"

Sprite GameObject::getDrawable(){ 
    return sprite;
};

void GameObject::render(Renderizador* renderizador){
    renderizador->draw(sprite, position);
};

GameObject::GameObject(Sprite sprite, Vector position){

    this->sprite = sprite;
    this->position = position;

};
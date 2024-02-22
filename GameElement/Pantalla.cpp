#include "Pantalla.h"

void Pantalla::render(Renderizador* renderizador){
    renderizador->draw(elements, position, false);
}

void Pantalla::update(double deltaTime){
    for(auto& element : elements){element->update(deltaTime);}
}
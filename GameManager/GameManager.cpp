#include "GameManager.h"

GameManager::GameManager(Pantalla pantalla){
    this->pantalla = pantalla;
    this->renderizador.setElements(pantalla.elements);
}

void GameManager::init(){
    gameLoop();
}

void GameManager::gameLoop(){
    double deltaTime{};
    while(1){
        //controler.getInput();
        pantalla.update(deltaTime);
        renderizador.render();
    } 
}

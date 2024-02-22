#include "Renderizador.h"


Renderizador::Renderizador(Vector size, std::vector<GameElement*> elements){
    this->size = size;
    this->elements = elements;
    nextBuffer = FrameBuffer(size);
    nextBuffer.clear();
    system("cls");
}

void Renderizador::setElements(std::vector<GameElement*>&elements){
    this->elements = elements;
}


void Renderizador::render(){
    this->draw(elements,Vector(0,0),true);
}

void Renderizador::draw(){
    std::cout << "\x1b[H"; 
    for(int i{}; i < size.x*size.y; i++){
        if(((i+1) % (int)size.x) != 0 ){
            std::cout << currentBuffer.at(i);            
        }
        else{
            std::cout << currentBuffer.at(i) << "\n";
        }
    }    
}


void Renderizador::draw(std::vector<GameElement*> &elements, Vector position, bool main){

    for(auto& element : elements){ 
        Vector elementPosition = element->getPosition();
        element->setPosition(elementPosition + position);
        element->render(this);
        element->setPosition(elementPosition - position);
        //this->draw(*elementgetDrawable(), elementPosition);
    }
    if(main){
        swap();
        draw(); 
    }else{
        nextBuffer.draw(0, 'U');
    }
};

void Renderizador::swap(){
    FrameBuffer swapAux = nextBuffer;
    nextBuffer = currentBuffer;
    currentBuffer = swapAux;
    nextBuffer.clear();
}


void Renderizador::draw(std::string message, Vector position){


    int bufferPosition = (position.y * size.x) + position.x;

    for(char chara : message){
        

        if ((bufferPosition - position.x )/size.x > this->size.y)
        {
            return;
        }
        
        if ((bufferPosition - (position.y * size.x) > this->size.x-1)){
            return;
        }

          nextBuffer.draw(bufferPosition, chara);  
          bufferPosition++; 
    }

};


void Renderizador::draw(Sprite sprite, Vector position){

    int bufferPosition{};
    Vector spriteCursor{};


    for(char chara : sprite.image){


        bufferPosition = ((position.y + spriteCursor.y) * size.x) + position.x + spriteCursor.x;

        if(spriteCursor.x + 1 < sprite.size.x){
            spriteCursor.x++;
        }
        else{
            spriteCursor.y++;
            spriteCursor.x = 0;
        }

        if(spriteCursor.y + 1 > sprite.size.y){
            return;
        }

        if (((bufferPosition - spriteCursor.x - position.x)/size.x) > this->size.y){
            return;
        }  

        if ((bufferPosition - ((position.y + spriteCursor.y) * size.x) > this->size.x)){
            continue;
        }

        nextBuffer.draw(bufferPosition, chara);

    }
     
};


    void GameElement::render(Renderizador* renderizador){

        renderizador->draw(0, Vector(0,0));
        std::cout << "soy un element" << "\n";

    };
#include "FrameBuffer.h"

FrameBuffer::FrameBuffer(Vector size){
    this->size = size;
}

void FrameBuffer::draw(int position, char pixel){
    if(position > size.x*size.y){
        return;
    }
    this->pixels[position] = pixel;
}

void FrameBuffer::clear(){
    this->pixels.clear();
    this->pixels.assign(size.x*size.y, ' ');
}

char FrameBuffer::at(int position){
    return pixels[position];
}
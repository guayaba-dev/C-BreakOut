#include "FrameBuffer.h"

FrameBuffer::FrameBuffer(Vector size){
    this->size = size;
}

void FrameBuffer::draw(int position, char pixel){
    this->pixels[position] = pixel;
}

void FrameBuffer::clear(){
    this->pixels.clear();
    this->pixels.assign(size.x*size.y, ' ');
}

char FrameBuffer::at(int position){
    return this->pixels.at(position);
}
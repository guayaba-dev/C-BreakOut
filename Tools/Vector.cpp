#include "Vector.h"

Vector::Vector(float x, float y){
    this->x = x;
    this->y = y;
};

Vector Vector::operator+(Vector other){
    this->x += other.x;
    this->y += other.y;
    return *this;
}

Vector Vector::operator-(Vector other){
    this->x -= other.x;
    this->y -= other.y;
    return *this;
}
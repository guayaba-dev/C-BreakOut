#pragma once

struct Vector 
{
    float x{0};
    float y{0};

    Vector() = default;
    Vector(float x, float y);    
    Vector operator+(Vector other);
    Vector operator-(Vector other);
};


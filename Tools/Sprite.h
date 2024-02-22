#pragma once
#include <string>
#include "Vector.h"

struct Sprite
{
    std::string image{};
    Vector size = Vector();
    Sprite(){};
    Sprite(float x, float y);
    Sprite(float x, float y, std::string image);
};

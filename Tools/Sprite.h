#pragma once
#include <string>
#include "Vector.h"

struct Sprite
{
    std::string image{};
    Vector size = Vector();
    Sprite(){};
    Sprite(float x, float y);
};

#pragma once
#include <vector>
#include "vector.h"


class FrameBuffer
{

    std::vector<char> pixels;
    Vector size;


public:
    FrameBuffer(Vector size);
    FrameBuffer()=default;
    void draw(int position, char pixel);
    void clear();
    char at(int position);
};


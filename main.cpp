#include <iostream>
#include "Tools/Vector.h"

int main(){

    Vector nuevoVector = Vector(5,7);

    std::cout << nuevoVector.x << std::endl;

    std::cout << nuevoVector.y << std::endl;

    return 0;
}



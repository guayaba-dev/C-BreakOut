#include <iostream>
#include "Tools/Vector.h"
#include "GameManager/GameManager.h"
#include "Assets/pantallas/dibujofeo.h"

int main(){

    GameManager engine = GameManager(dibujofeo());

    engine.init();

    return 0;
}



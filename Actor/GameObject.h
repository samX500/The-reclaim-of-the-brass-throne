//
// Created by samx500 on 2020-08-01.
//

#ifndef UNTITLEDROGUELIKEGAME_GAMEOBJECT_H
#define UNTITLEDROGUELIKEGAME_GAMEOBJECT_H


#include "../Utility/Position.h"

class GameObject {
    Position position;

    GameObject();

    void move(Position position);


public:
    Position getPosition();
};


#endif //UNTITLEDROGUELIKEGAME_GAMEOBJECT_H

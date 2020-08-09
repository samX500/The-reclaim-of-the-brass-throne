//
// Created by samx500 on 2020-08-09.
//

#ifndef UNTITLEDROGUELIKEGAME_INPUTCOMPONENT_H
#define UNTITLEDROGUELIKEGAME_INPUTCOMPONENT_H


#include "../Actor/GameObject.h"

class InputComponent {
    virtual void update(GameObject object)=0;
};


#endif //UNTITLEDROGUELIKEGAME_INPUTCOMPONENT_H

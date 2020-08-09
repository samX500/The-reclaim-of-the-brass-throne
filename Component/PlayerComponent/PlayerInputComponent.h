//
// Created by samx500 on 2020-08-09.
//

#ifndef UNTITLEDROGUELIKEGAME_PLAYERINPUTCOMPONENT_H
#define UNTITLEDROGUELIKEGAME_PLAYERINPUTCOMPONENT_H


#include "../InputComponent.h"
#include "../../Actor/GameObject.h"

class PlayerInputComponent : public InputComponent{


    void update(GameObject object) override =0;
};


#endif //UNTITLEDROGUELIKEGAME_PLAYERINPUTCOMPONENT_H

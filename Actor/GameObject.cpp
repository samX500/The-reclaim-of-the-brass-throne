//
// Created by samx500 on 2020-08-01.
//

#include "GameObject.h"

GameObject::GameObject():position(Position(0,0)){}

Position GameObject::getPosition() {
    return position;
}

void GameObject::move(Position position) {
    this->position = position;
}

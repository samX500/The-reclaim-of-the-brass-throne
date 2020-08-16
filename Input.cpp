//
// Created by samx500 on 2020-08-09.
//

#include "Input.h"

Input::Input() : up(sf::Keyboard::W), down(sf::Keyboard::S), right(sf::Keyboard::D), left(sf::Keyboard::A) {

}

bool Input::isUp(sf::Keyboard::Key key) {
    return key == up;
}

bool Input::isDown(sf::Keyboard::Key key) {
    return key == down;
}

bool Input::isRight(sf::Keyboard::Key key) {
    return key == right;
}

bool Input::isLeft(sf::Keyboard::Key key) {
    return key == left;
}

Command* Input::getInput(sf::Event) {

}



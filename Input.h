//
// Created by samx500 on 2020-08-09.
//

#ifndef UNTITLEDROGUELIKEGAME_INPUT_H
#define UNTITLEDROGUELIKEGAME_INPUT_H
#include <SFML/Window.hpp>
#include "Command/Command.h"

class Input {

    sf::Keyboard::Key up;
    sf::Keyboard::Key down;
    sf::Keyboard::Key right;
    sf::Keyboard::Key left;

    bool isUp(sf::Keyboard::Key key);
    bool isDown(sf::Keyboard::Key key);
    bool isRight(sf::Keyboard::Key key);
    bool isLeft(sf::Keyboard::Key key);

public:
    Command* getInput(sf::Event);
    Input();
};


#endif //UNTITLEDROGUELIKEGAME_INPUT_H

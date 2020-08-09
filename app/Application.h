//
// Created by samx500 on 2020-07-26.
//

#ifndef UNTITLEDROGUELIKEGAME_APPLICATION_H
#define UNTITLEDROGUELIKEGAME_APPLICATION_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class Application {
    int x;
    int y;
    int acceleration;
    sf::RenderWindow* window;

    bool gameIsRunning;

    void processInput();
    void update();
    void render();

public:
    Application();

    void start();
};


#endif //UNTITLEDROGUELIKEGAME_APPLICATION_H

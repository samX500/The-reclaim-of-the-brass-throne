//
// Created by samx500 on 2020-07-26.
//

#include "Application.h"
#include <chrono>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

double MS_PER_UPDATE = 20;

Application::Application() : x(0), y(0), acceleration(10), input() {

    gameIsRunning = true;
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "My window");

}

void Application::start() {

    double previousTime = std::chrono::steady_clock::now().time_since_epoch().count();
    double lag = 0;
    while (window->isOpen()) {
        double currentTime = std::chrono::steady_clock::now().time_since_epoch().count();
        double elapsedTime = currentTime - previousTime;
        previousTime = currentTime;
        lag += elapsedTime;

        processInput();

        while (lag >= MS_PER_UPDATE) {
            update();
            lag -= MS_PER_UPDATE;
        }

        render();
    }
}

void Application::processInput() {
    sf::Event event;

    while (window->pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window->close();
        Command* command = input.getInput(event);
        command->execute();
    }
}


void Application::update() {

}

void Application::render() {
    window->setActive();

    window->clear(sf::Color::Black);

    sf::RectangleShape rectangle;
    rectangle.setSize(sf::Vector2f(100, 50));
    rectangle.setOutlineColor(sf::Color::Red);
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setOutlineThickness(5);
    rectangle.setPosition(x, y);

    window->draw(rectangle);

    window->display();
}


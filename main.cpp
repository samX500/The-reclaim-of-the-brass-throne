#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "app/Application.h"

//https://gameprogrammingpatterns.com/contents.html

int main() {

    std::vector<int> v = {5,6};
    Application* app =new Application();
    app->start();
    return 0;
}

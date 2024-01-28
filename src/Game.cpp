#include "Game.h"

#include <iostream>
#include <cmath>


#include <engine/functions.h>


class Game {
    sf::Font font;

    public: 
        int run() {
            sf::RenderWindow window(sf::VideoMode(800, 600), "Idk Something");
            if (!font.loadFromFile("./assets/font/Roboto-Black.ttf")) {   
                return -1;
            }
        }      
};
#include "Game.h"
#include "entity/Entity.h"

void Game::run() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Idk Something");
    if (!font.loadFromFile("./assets/font/Roboto-Black.ttf")) {   
        return;
    }

    Entity::MainCharacter mc;
    Entity::Block block(mc);
    Entity::Floor floor(mc);

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        mc.loop();
        block.loop();
        floor.loop();
    }
}
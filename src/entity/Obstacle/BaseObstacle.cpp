#include "entity/Entity.h"

namespace Entity {
    BaseObstacle::BaseObstacle(MainCharacter& mainCharacter) {
        this->mainCharacter = mainCharacter;
    }

    void BaseObstacle::loop() {
        sf::Sprite character = mainCharacter.getCharacterSprite();

        for (auto obstacle = obstacleList.begin(); obstacle != obstacleList.end(); ++obstacle) {
            if (character.getPosition().x >= obstacle->getPosition().x && character.getPosition().x <= (obstacle->getPosition().x + obstacle->getGlobalBounds().width)) {
                if (obstacle->getPosition().y - (character.getPosition().y + character.getGlobalBounds().height) <= 1.0f) {
                    mainCharacter.setJumping(false);
                    character.move(0.0f, 0.0f);
                    return;
                }
            }
        }
    }
}

#include "Entity.h"

namespace Entity {
    class Block : public BaseObstacle {
        protected:
            sf::RectangleShape obstacle;

        public:
            Block() {
                obstacle.setSize(sf::Vector2f(50.0f,50.0f));
                obstacle.setPosition(300.0f,330.0f);
                obstacle.setFillColor(sf::Color::Red);
                obstacleList.push_back(obstacle);
            }
    };   
}
#include "entity/Entity.h"


namespace Entity {
    class BaseObstacle
    {            
        protected:
            static std::vector<sf::RectangleShape> obstacleList;

        public:
            void loop() {
                for (auto obstacle = obstacleList.begin(); obstacle != obstacleList.end(); ++obstacle) {
                    if(character.getPosition().x>=obstacles[i].getPosition().x && character.getPosition().x<= (obstacles[i].getPosition().x+obstacles[i].getGlobalBounds().width)){
                        if(obstacles[i].getPosition().y-(character.getPosition().y+character.getGlobalBounds().height)<=1.0f){
                            // return 0.0f;
                            IsJumping=false;
                            character.move(0.0f,0.0f);
                            return;
                        }
                    }
                }
            }

    };
}
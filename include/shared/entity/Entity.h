#include <vector>

#include <SFML/Graphics.hpp>

namespace Entity {
    class MainCharacter {
        private:
            sf::Texture texture;
            sf::Sprite charactersprite;
            bool isFalling;

            public:
                MainCharacter();
                void loop();
                void display(sf::RenderWindow& window);
                void move(float x, float y);
                sf::Sprite getCharacterSprite();
                void setJumping(bool isFalling);
                bool getJumping();
    };

    class BaseObstacle {
        protected:
            static std::vector<sf::RectangleShape> obstacleList;
            sf::RectangleShape obstacle;
            MainCharacter& mainCharacter;
        public: 
            BaseObstacle(MainCharacter& mainCharacter);
            void loop();
            void move(float x, float y);
            void display(sf::RenderWindow& window);
    };

    
    class Floor: public BaseObstacle {
        public:
            Floor(MainCharacter& mainCharacter);
    };

    class Block: public BaseObstacle {
        public:
            Block(MainCharacter& mainCharacter);
    };
};
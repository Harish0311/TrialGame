#include <vector>

#include <SFML/Graphics.hpp>

namespace Entity {
    class MainCharacter {
        private:
            static sf::Texture texture;
            static sf::Sprite charactersprite;
            static float MovementVelocity;
            static float JumpVelocity;
            bool IsFalling;

            public:
                MainCharacter();
                void loop();
                sf::Sprite getCharacterSprite();
                void setJumping(bool IsFalling);
    };

    class BaseObstacle {
        protected:
            static std::vector<sf::RectangleShape> obstacleList;
            sf::RectangleShape obstacle;
            MainCharacter& mainCharacter;
        public: 
            BaseObstacle(MainCharacter& mainCharacter);
            void loop();
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
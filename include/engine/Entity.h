#include <vector>

#include <SFML/Graphics.hpp>

namespace Entity {
    class BaseEntity {
        protected:
            static MainCharacter mc;
    };

    class BaseObstacle {
        protected:
            static std::vector<sf::RectangleShape> obstacleList;
            sf::RectangleShape obstacle;
        public: 
            void loop();
    };

    
    class Floor: public BaseObstacle {
        public:
            Floor();
    };

    class Block: public BaseObstacle {
        public:
            Block();
    };

    class MainCharacter : public BaseEntity {
        private:
            static sf::Texture texture;
            static sf::Sprite charactersprite;
            static float MovementVelocity;
            static float JumpVelocity;
            bool IsFalling;

            public:
                MainCharacter();
    };
    
};
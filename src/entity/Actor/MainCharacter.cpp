#include "Entity.h"

namespace Entity {
    class MainCharacter {
        private:
            sf::Texture texture;
            sf::Sprite charactersprite;
            bool IsFalling;
            float MovementVelocity;
            float JumpVelocity;

        public:
            MainCharacter() : IsFalling(true), MovementVelocity(0.0f), JumpVelocity(0.0f) {
                if (!texture.loadFromFile("../assets/Character/mc.png")) {
                    return;
                }
                charactersprite.setTexture(texture);
                charactersprite.setPosition(40.0f, 200.0f);
            }

            void MainCharacter::loop() {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && IsFalling == true){
                    for(int i =0; i<1000;i++){
                        charactersprite.move(0.0f,-0.1f);
                    }
                    return ;
                }
                else{
                    charactersprite.move(0.0f,0.0f);
                    return ;
                }
            }
    };
}

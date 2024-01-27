#include "Entity.h"

namespace Entity {
    class BaseEntity {
        protected:
            MainCharacter& mainCharacter;

        public:
            BaseEntity(MainCharacter& mainCharacter) : mainCharacter(mainCharacter) {}
    };
}
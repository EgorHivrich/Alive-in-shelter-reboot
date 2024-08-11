#ifndef __GAME_OBJECT_HPP
#define __GAME_OBJECT_HPP

#include "../headers/spriteSheet.hpp"

class GameObject {
public:
    virtual void onClick(void) = 0;

    const Sprite& getSprite(void) const;

private:
    Sprite sprite;
};

#endif // __GAME_OBJECT_HPP
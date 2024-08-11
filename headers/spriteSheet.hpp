#ifndef __SPRITE_SHEET_HPP
#define __SPRITE_SHEET_HPP

#include <SDL2/SDL.h>
#include <string>

struct Sprite {
    Sprite(SDL_Surface* image, const SDL_Point& position);

    SDL_Surface* image;
    SDL_Rect rectangle;
};

class SpriteSheet {
public:
    SpriteSheet(const std::string& imageFilePath);

    ~SpriteSheet(void);

public:
    void selectSprite(const SDL_Point& position, Sprite& output);

private:
    SDL_Surface* image;
};

#endif //__SPRITE_SHEET_HPP
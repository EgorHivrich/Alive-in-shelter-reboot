#include "../headers/spriteSheet.hpp"

Sprite::Sprite(SDL_Surface* image, const SDL_Point& position) {
    this->image = image;
    this->rectangle = { position.x, position.y, image->w, image->h };
}

SpriteSheet::SpriteSheet(const std::string& imageFilePath) {
    this->image = SDL_LoadBMP(imageFilePath.c_str());
}

SpriteSheet::~SpriteSheet(void) {
    SDL_FreeSurface(this->image);
}

void SpriteSheet::selectSprite(const SDL_Point& position, Sprite& output) {} // selecting out sprite from sprite table and put it to output
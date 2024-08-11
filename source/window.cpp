#include "../headers/window.hpp"

Window::Window(const std::string& name) {
    this->windowInformation = SDL_CreateWindow(name.c_str(), 200, 200, 1000, 1000, 0);
    this->surface = SDL_GetWindowSurface(this->windowInformation);
}

Window::~Window(void) {
    SDL_FreeSurface(this->surface);
}

void Window::renderGameObject(const GameObject& gameObject) const {
    Sprite sprite = gameObject.getSprite();
    SDL_BlitSurface(surface, &this->surface->clip_rect, sprite.image, &sprite.rectangle);
}

void Window::handleEvents(void) {
    SDL_Event event;
    while(SDL_WaitEvent(&event) == true) {
        this->eventsHandlers[event.type]();
    }
}
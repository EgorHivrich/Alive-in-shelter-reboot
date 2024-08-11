#ifndef __WINDOW_HPP
#define __WINDOW_HPP

#include "../headers/spriteSheet.hpp"
#include "../headers/gameObject.hpp"

#include <unordered_map>
#include <string>

class Window {
public:
    Window(const std::string& name);

    ~Window(void);

public:
    void renderGameObject(const GameObject& object) const;

    void handleEvents(void);

private:
    SDL_Window* windowInformation;
    SDL_Surface* surface;

    std::unordered_map<std::uint32_t, void(*)(void)> eventsHandlers;
};

#endif // __WINDOW_HPP
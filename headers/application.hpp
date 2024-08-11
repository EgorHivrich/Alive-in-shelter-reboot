#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#define SDL_MAIN_HANDLED

#include <SDL2/SDL.h>

enum class ApplicationCondition {
    IsRunning, Stopped, Paused
};

class Application {
public:
    ApplicationCondition getCurrentCondition(void) const;

    void update(void) const;

private:
    ApplicationCondition condition = ApplicationCondition::IsRunning;
};

#endif // APPLICATION_HPP
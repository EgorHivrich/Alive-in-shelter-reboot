#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#define SDL_MAIN_HANDLED

#include <SDL.h>

enum class ApplicationCondition {
    IsRunning, Stopped, Paused
};

class Application {
public:
    ApplicationCondition getCurrentCondition(void) const;

    void onUpdate(void) const;

private:
    ApplicationCondition condition = ApplicationCondition::IsRunning;
};

#endif
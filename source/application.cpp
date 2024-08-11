#include "../headers/application.hpp"

ApplicationCondition Application::getCurrentCondition(void) const {
    return this->condition;
}

void Application::update(void) const {}
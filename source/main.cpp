#include "../headers/application.hpp"

int main(int argc, char* argv[]) {
    Application* application = new Application();
    while(application->getCurrentCondition() != ApplicationCondition::Stopped) {
        application->onUpdate();
    }
    return 0;
}
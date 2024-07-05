#include <SFML/Graphics.hpp>
#include <iostream>
#include "Header/GameService.h"

using namespace std;

int main()
{
    GameService game_service;
    game_service.ignite();

    while (game_service.isRunning())
    {
        game_service.update();
        game_service.render();
    }

    return 0;
}
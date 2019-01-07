#include <iostream>
#include "SDL2/SDL.h"
#include "../include/Game.h"
using namespace std;

int main(int argc, char *argv[])
{
    Game game;
    bool gameInitResult = game.Initialize();

    if (gameInitResult)
    {
        game.RunLoop();
    }
    game.Shutdown();
    return 0;
}
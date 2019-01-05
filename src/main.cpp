#include <iostream>
#include "../include/Game.h"
using namespace std;

int main()
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
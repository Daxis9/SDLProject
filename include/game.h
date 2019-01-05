#ifndef GAME_H
#define GAME_H

#include "SDL2/SDL.h"

#endif

class Game
{
    public:
        //Constructor
        Game();
        //Destructor
        ~Game();
        //Start the game
        bool Initialize();
        //Loop that runs until the game ends
        void RunLoop();
        //Stop the game
        void Shutdown();
    private:
        //Helper functions for game loop
        void ProcessInput();
        void UpdateGame();
        void GenerateOutput();
    
        //Window created by SDL
        SDL_Window* m_Window;
        //Game should continue to run
        bool m_IsRunning;
};
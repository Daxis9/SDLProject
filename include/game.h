#include "SDL.h"
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
        void Runloop();
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
}
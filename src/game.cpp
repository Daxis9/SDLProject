#include <iostream>
#include "SDL2/SDL.h"
#include "../include/Game.h"
using namespace std;


bool Game::Initialize()
{
    int sdlInitResult = SDL_Init(SDL_INIT_VIDEO);
    if (sdlInitResult != 0)
    {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return false;
    }

    SDL_Window* m_Window = SDL_CreateWindow(
        "Thomas's Game",    //Window Title
        100,                //x coordinate
        100,                //y coordinate
        1024,               //
        765,                //
        0                   //
    );

    if (!m_Window)
    {
        SDL_Log("Unable to create window: %s", SDL_GetError());
        return false;
    }

    return true;
}

void Game::RunLoop()
{
    while (m_IsRunning)
    {
        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}

void Game::Shutdown()
{
    SDL_DestroyWindow(m_Window);
    SDL_Quit();
}

void Game::ProcessInput()
{
    int i = 0;
    cin >> i;
}

void Game::UpdateGame()
{

}

void Game::GenerateOutput()
{

}
#include "Box.h"
#include "Vec2.h"
#include "RigidbodyComponent.h"
#include <iostream>
#include "SDL.h"
#include <vector>
#define WIDTH 1600
#define HEIGHT 900
SDL_Renderer* pRenderer = NULL;


int main(int argc, char* argv[])
{

	SDL_Event event;
	bool quit = false;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cout << "SDL Could not initialize because :  " << SDL_GetError();
	}
	else
	{
		std::cout << "SDL is work";
	}

	SDL_Window* pWindow = NULL;
	pWindow = SDL_CreateWindow("Juuso Physics Engine aka JPE",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WIDTH, HEIGHT,
		SDL_WINDOW_SHOWN);



	pRenderer = SDL_CreateRenderer(pWindow,
		-1,
		SDL_RENDERER_ACCELERATED);



	SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, 255);
	SDL_RenderClear(pRenderer);
	SDL_RenderPresent(pRenderer);

	int counter = 0;
	while (!quit)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
			{
				quit = true;
				break;
			}
			if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_SPACE)
			{

			}
		}
	}
	return 0;
}
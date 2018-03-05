#include <iostream>
#include <Engine.h>
#include <SDL.h>
int main(int args, char** argc) {
	
	if (SDL_Init(0) == -1) {
	
		std::cout << "SDL_Init failed " << SDL_GetError() << std::endl;
	}
	else {
		std::cout << "SDL_Init succeded " << SDL_GetError() << std::endl;
	}

	Engine e;
	e.Print();

	std::cin.get();

	return 0;

}
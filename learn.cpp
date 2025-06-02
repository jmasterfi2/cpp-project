#include <SDL3/SDL_main.h>
#include <SDL3/SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SDL_FLAGS SDL_INIT_VIDEO
/*
struct GAME {
	SDL_Window* window;// =// SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, SDL_EVENT_WINDOW_SHOWN);
	SDL_Renderer* renderer;// = SDL_CreateRenderer(window, -1, 0);
};
*/

bool game_init_sdl();
void game_free();

bool game_init_sdl() {
	if (!SDL_Init(SDL_FLAGS)) {
		fprintf(stderr, "Error initializing SDL3: %s/n", SDL_GetError());
		return false;
	}
	return true;
}

void game_free(){
	SDL_Quit();
	}


int main(void) {
	bool exit_status = EXIT_FAILURE;

	if (game_init_sdl()) {
		exit_status = EXIT_SUCCESS;
	}

	game_free();

	return exit_status;
}

/*1>------ Build started: Project: life_pol_sim, Configuration: Debug x64 ------
1 > learn.obj : error LNK2019 : unresolved external symbol SDL_main referenced in function wWinMain
1 > Hint on symbols that are defined and could potentially match :
1 > "int __cdecl SDL_main(void)" (? SDL_main@@YAHXZ)
1 > E:\cpp_project\life_pol_sim\x64\Debug\life_pol_sim.exe : fatal error LNK1120 : 1 unresolved externals
1 > Done building project "life_pol_sim.vcxproj" --FAILED.
*/

testddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
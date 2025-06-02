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

testddxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx// TEST CHANGE - Mon Jun  2 00:39:22 EDT 2025
// TEST CHANGE - Mon Jun  2 00:46:56 EDT 2025
// Test Mon Jun  2 01:12:03 EDT 2025
// Test Mon Jun  2 01:14:05 EDT 2025
// Test Mon Jun  2 01:19:20 EDT 2025
// Test at Mon Jun  2 01:29:56 EDT 2025
// GitHub Test 01:53:56

// Final Test 02:09:26

// Final Test 02:10:42

// Final Test 02:14:52

// Final Test 02:36:27

// Final Test 02:36:45

// Final Test 02:36:48

// Final Test 02:36:50

// Final Test 02:36:53
// Test 2025-06-02 02:42:46
// Test 2025-06-02 02:43:07
// Test 2025-06-02 02:43:33
// Test 2025-06-02 02:54:23

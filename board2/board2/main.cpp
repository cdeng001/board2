#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <global.h>

int main(int argc, char* args[]){
	if (!init())
	{
		printf("Failed to initialize!\n");
	}
	else{
		printf("good");
		while (true){};
	}
	return 0;
}
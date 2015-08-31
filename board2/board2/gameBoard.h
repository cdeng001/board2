#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include <team.h>

class gameBoard{
public:
	gameBoard();
	gameBoard(Team team1, Team team2);
	virtual ~gameBoard();

protected:

};
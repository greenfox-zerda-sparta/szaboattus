//============================================================================
// Name        : Amoba_game.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <stdio.h>
#include "GameLogic.h"
#include "SDLWindow.h"
#include "SDL.h"

using namespace std;


int main(int argc, char *argv[]) {

  GameLogic game;
  SDL_Window sdl_window(570, 570);
  sdl_window.run();

	return 0;
}

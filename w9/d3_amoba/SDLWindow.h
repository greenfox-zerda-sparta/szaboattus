/*
 * SDLWindow.h
 *
 *  Created on: 2016 dec. 21
 *      Author: win7
 */

#ifndef SDLWINDOW_H_
#define SDLWINDOW_H_
#include <utility>
#include <vector>
#include "SDL2/SDL.h"
#include <SDL_Net.h>
#include <iostream>
#include "ClientSocket.h"

using namespace std;

class SDL_Window {
private:
  int x;
  int y;
  int gamer = 1;
  SDL_Window *window;
  SDL_Renderer* renderer;
  SDL_Surface * image;
  SDL_Texture * texture;
  SDL_Event event;
  ClientSocket *cs;

public:
  string message;
  SDL_Window();
  void run();
  pair <int, int> create_click_coordinates(int x, int y);
  std::pair <int, int> create_coordinates(string msg);
  string give_mouse_coordinates(int x, int y);
};

#endif /* SDLWINDOW_H_ */

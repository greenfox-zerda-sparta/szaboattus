/*
 * SDLWindow.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: win7
 */

#include "SDLWindow.h"
#include "GameLogic.h"
#include <iostream>


SDL_Window::SDL_Window(int width, int height) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow(
  "Amoba",
  SDL_WINDOWPOS_CENTERED,
  SDL_WINDOWPOS_CENTERED,
  width,
  height,
  SDL_WINDOW_OPENGL);
  drawbackground();
}

void SDL_Window::drawbackground() {
  renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 224, 160, 64, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}

void SDL_Window::run(vector <vector<int>> &V) {
int running = 1;
pair <int, int> coordinates;
  while (running) {
    if (SDL_PollEvent(&event) != 0) {
      if (event.type == SDL_QUIT) {
        running = 0;
        break;
      }
    }
    if (event.type == SDL_MOUSEBUTTONDOWN) {
      gamer++;
      coordinates.first = event.button.x;
      coordinates.second = event.button.y;
      drawimage(coordinates, gamer);
      coordinates = {0, 0};
      event.type = NULL;
      V[coordinates.first / 30][coordinates.second / 30] = gamer % 2;
      cout << V[coordinates.first / 30][coordinates.second / 30] << " | ";
    }
  }
}

void SDL_Window::drawimage(pair <int, int> coordinates, int &gamer) {
  if (gamer % 2) {
    image = SDL_LoadBMP("x.bmp");
  }
  else {
    image = SDL_LoadBMP("o.bmp");
  }
  SDL_Rect dstrect = {(coordinates.first / 30) * 30, (coordinates.second / 30) * 30, 30, 30};
  texture = SDL_CreateTextureFromSurface(renderer, image);
  SDL_RenderCopy(renderer, texture, NULL, &dstrect);
  SDL_RenderPresent(renderer);
}

SDL_Window::~SDL_Window() {
  SDL_FreeSurface(image);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyTexture(texture);
  SDL_DestroyWindow(window);
  SDL_Quit();
}


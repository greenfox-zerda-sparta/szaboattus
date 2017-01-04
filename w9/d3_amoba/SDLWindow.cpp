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
  SDL_Init(SDL_INIT_EVERYTHING);
  window = SDL_CreateWindow(
  "Amoba",
  SDL_WINDOWPOS_CENTERED,
  SDL_WINDOWPOS_CENTERED,
  width,
  height,
  SDL_WINDOW_OPENGL);
  drawbackground();
  GameLogic game;
}

void SDL_Window::run() {
GameLogic game;
int running = 1;
  while (running) {
    if (SDL_PollEvent(&event) != 0) {
      if (event.type == SDL_QUIT) {
        running = 0;
        break;
      }
    }
    if (event.type == SDL_MOUSEBUTTONDOWN) {
      game.set_grid_value(event.button.x, event.button.y, gamer);
      drawimage(event.button.x, event.button.y, gamer);
      event.type = NULL;
      game.draw_vector();
    }
    if (game.iswinner()) {
     SDL_Delay(3000);
     draw_winner(gamer - 1);
     SDL_Delay(1000);
     running = 0;
     break;
     }
  }
}

pair <int, int> SDL_Window::create_click_coordinates(int x, int y) {
  pair <int, int> coordinates;
  coordinates.first = x;
  coordinates.second = y;
  return coordinates;
}

void SDL_Window::drawbackground() {
  renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 224, 160, 64, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}

void SDL_Window::drawimage(int & x, int& y, int &gamer) {
  if (gamer % 2) {
    image = SDL_LoadBMP("x.bmp");
  }
  else {
    image = SDL_LoadBMP("o.bmp");
  }
  SDL_Rect dstrect = {(x / 30) * 30, (y / 30) * 30, 30, 30};
  texture = SDL_CreateTextureFromSurface(renderer, image);
  SDL_RenderCopy(renderer, texture, NULL, &dstrect);
  SDL_RenderPresent(renderer);
  gamer++;
}

void SDL_Window::draw_winner(int player) {
  if (player % 2) {
      image = SDL_LoadBMP("x_winner.bmp");
    }
  else {
      image = SDL_LoadBMP("o_winner.bmp");
    }
    SDL_Rect dstrect = {0, 0, 600, 600};
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


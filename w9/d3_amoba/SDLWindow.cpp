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
  SDLNet_Init();
  IPaddress ip;
  cs = new ClientSocket("10.27.99.120", 1234, 512);
  cs->connectToServer();

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
    string msg = "";
    msg = cs->checkForIncomingMessages();
    if (msg.length() > 1) {
      x = create_coordinates(msg).first;
      y = create_coordinates(msg).second;
      cout << gamer << ": click on: " << x << "  "  << y << endl;
      if (game.allow_to_step(x,y)) {
        gamer++;
        game.set_grid_value(x, y,gamer);
        game.draw_vector();
        drawimage(x,y,gamer);
      }
    }
    if (SDL_PollEvent(&event) != 0) {
      if (event.type == SDL_QUIT) {
        running = 0;
        break;
      }
      if (event.type == SDL_MOUSEBUTTONDOWN) {
        if(game.allow_to_step(event.button.x / 30, event.button.y / 30)) {
          cs->getUserInput(give_mouse_coordinates(event.button.x, event.button.y));
        }
        event.type = NULL;
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
}

string SDL_Window::give_mouse_coordinates(int x, int y) {
  return to_string(x / 30) + "," + to_string(y / 30);
}

pair <int, int> SDL_Window::create_coordinates(string msg) {
  pair <int, int> coordinates;
  string x="";
  string y="";
  string temp="";
  for (unsigned int i = 0; i < msg.length(); i++) {
      if (msg[i] != ',') {
      temp +=msg[i];
    }
    if (msg[i] == ',') {
      x = temp;
      temp = "";
    }
  }
  y = temp;
  coordinates.first = stoi(x);
  coordinates.second = stoi(y);
  return coordinates;
}

void SDL_Window::drawbackground() {
  renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 224, 160, 64, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}

void SDL_Window::drawimage(int& x, int& y, int& gamer) {
  cout << x << y << endl;
  if (gamer % 2 == 0) {
    image = SDL_LoadBMP("x.bmp");
  }
  else {
    image = SDL_LoadBMP("o.bmp");
  }
  SDL_Rect dstrect = {x * 30, y * 30, 30, 30};
  texture = SDL_CreateTextureFromSurface(renderer, image);
  SDL_RenderCopy(renderer, texture, NULL, &dstrect);
  SDL_RenderPresent(renderer);
}

void SDL_Window::draw_winner(int player) {
  if (player % 2) {
      image = SDL_LoadBMP("x_winner.bmp");
      message = "x";
    }
  else {
      image = SDL_LoadBMP("o_winner.bmp");
      message = "o";
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

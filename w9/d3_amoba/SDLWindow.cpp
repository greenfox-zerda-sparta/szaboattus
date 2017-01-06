/*
 * SDLWindow.cpp
 *
 *  Created on: 2016 dec. 21
 *      Author: win7
 */

#include "SDLWindow.h"
#include "GameLogic.h"
#include "DrawImg.h"
#include <iostream>


SDL_Window::SDL_Window() {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  //IPaddress ip;
  cs = new ClientSocket("10.27.99.120", 1234, 512);
  cs->connectToServer();
}

void SDL_Window::run() {
  GameLogic game;
  DrawImg drawimg(570, 570);
  int running = 1;
  while (running) {
    string msg = "";
    msg = cs->checkForIncomingMessages();
    if (msg.length() > 1) {
      x = create_coordinates(msg).first;
      y = create_coordinates(msg).second;
      if (game.allow_to_step(x,y)) {
        gamer++;
        game.set_grid_value(x, y,gamer);
        drawimg.drawimage(x,y,gamer);
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
        drawimg.draw_winner(gamer - 1);
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

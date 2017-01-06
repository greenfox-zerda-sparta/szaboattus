/*
 * DrawImg.cpp
 *
 *  Created on: 2017 jan. 6
 *      Author: win7
 */

#include "DrawImg.h"

DrawImg::DrawImg(int width, int height){
  SDL_Init(SDL_INIT_EVERYTHING);
  window = SDL_CreateWindow(
   "Amoba",
   SDL_WINDOWPOS_CENTERED,
   SDL_WINDOWPOS_CENTERED,
   width,
   height,
   SDL_WINDOW_OPENGL);
   drawbackground();
}

void DrawImg::draw_winner(int player) {
  if (player % 2) {
      image = SDL_LoadBMP("x_winner.bmp");
      //message = "x";
    }
  else {
      image = SDL_LoadBMP("o_winner.bmp");
      //message = "o";
    }
    SDL_Rect dstrect = {0, 0, 600, 600};
    texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_RenderCopy(renderer, texture, NULL, &dstrect);
    SDL_RenderPresent(renderer);
}

void DrawImg::drawbackground() {
  renderer = SDL_CreateRenderer(window, -1, 0);
  SDL_SetRenderDrawColor(renderer, 224, 160, 64, 255);
  SDL_RenderClear(renderer);
  SDL_RenderPresent(renderer);
}


void DrawImg::drawimage(int& x, int& y, int& gamer) {
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

DrawImg::~DrawImg(){
  SDL_FreeSurface(image);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyTexture(texture);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

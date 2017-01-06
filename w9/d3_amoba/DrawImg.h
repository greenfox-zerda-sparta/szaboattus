/*
 * DrawImg.h
 *
 *  Created on: 2017 jan. 6
 *      Author: win7
 */

#ifndef DRAWIMG_H_
#define DRAWIMG_H_
#include <utility>
#include "SDL2/SDL.h"
#include <iostream>

class DrawImg {
private:
  SDL_Window *window;
  SDL_Renderer* renderer;
  SDL_Surface * image;
  SDL_Texture * texture;
public:
  DrawImg(int, int);
  void draw_winner(int player);
  void drawbackground();
  void drawimage(int& x, int& y, int& gamer);
  ~DrawImg();
};

#endif /* DRAWIMG_H_ */

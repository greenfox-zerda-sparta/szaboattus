/*
 * Reggae.cpp
 *
 *  Created on: 2016 nov. 14
 *      Author: win7
 */

#include "Reggae.h"
#include <iostream>
#include <string>
#include "Song.h"

Reggae::Reggae(string artist, string title) : Song() {
   this->artist = artist;
   this->title = title;
   this->rate = 0;
   this->av_rate = 0;
}

bool Reggae::rating(int rate) {
  if (rate<=4 && rate>=1) {
    this->rate = rate;
    return 1;
    }
    return 0;
  }

/*
 * Rock.cpp
 *
 *  Created on: 2016 nov. 13
 *      Author: win7
 */

#include "Rock.h"
#include <iostream>
#include <string>
#include "Song.h"

Rock::Rock(string artist, string title) : Song() {
   this->artist = artist;
   this->title = title;
   this->rate = 0;
   this->av_rate = 0;
}

bool Rock::rating(int rate) {
  if (rate<=5 && rate>1) {
    this->rate = rate;
    return 1;
    }
    return 0;
  }

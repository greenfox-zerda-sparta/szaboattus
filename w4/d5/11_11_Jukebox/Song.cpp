/*
 * Song.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: win7
 */

#include "Song.h"
#include <iostream>
#include <string>

using namespace std;

Song::Song(string artist, string title) {
  this->artist = artist;
  this->title = title;
  this->rate = 0;
  this->av_rate = 0;
}

bool Song::rating(int rate) {
  if (rate<=5 && rate>=1) {
  this->rate = rate;
  return 1;
  }
  return 0;
}

std::string Song::get_artist() {
  return this->artist;
}

std::string Song::get_title() {
  return this->title;
}

int Song::get_rate() {
  return this->rate;
}


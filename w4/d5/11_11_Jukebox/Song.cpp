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

Song::Song() {

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

int Song::get_rating_counter() {
  return this->rating_counter;
}

bool Song::rating(int rate) {
  if (rate<=5 && rate>=1) {
    this->rate = rate;
    sum_rating += rate;
    rating_counter++;
    return 1;
    }
    return 0;
  }

float Song::average_of_ratings() {
  return (float)this->sum_rating / (float)this->rating_counter;
}

Song::~Song() {

}


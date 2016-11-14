/*
 * Rock.h
 *
 *  Created on: 2016 nov. 13
 *      Author: win7
 */

#ifndef ROCK_H_
#define ROCK_H_
#include <iostream>
#include <string>
#include "Song.h"

class Rock : public Song {
public:
  Rock(string artist, string title);
  bool rating(int rate);
};

#endif /* ROCK_H_ */

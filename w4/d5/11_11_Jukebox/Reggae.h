/*
 * Reggae.h
 *
 *  Created on: 2016 nov. 14
 *      Author: win7
 */

#ifndef REGGAE_H_
#define REGGAE_H_
#include <iostream>
#include <string>
#include "Song.h"

class Reggae : public Song {
public:
  Reggae(string artist, string title);
  bool rating(int rate);
};

#endif /* REGGAE_H_ */

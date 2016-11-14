/*
 * Pop.cpp
 *
 *  Created on: 2016 nov. 14
 *      Author: win7
 */

#include "Pop.h"
#include <iostream>
#include <string>
#include "Song.h"

Pop::Pop(string artist, string title) : Song() {
   this->artist = artist;
   this->title = title;
   this->rate = 0;
   this->av_rate = 0;
}

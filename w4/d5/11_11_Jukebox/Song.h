/*
 * Song.h
 *
 *  Created on: 2016 nov. 11
 *      Author: win7
 */

#ifndef SONG_H_
#define SONG_H_
#include <iostream>
#include <string>

using namespace std;

class Song {
private:
  unsigned int rate;
  float av_rate;
  std::string title;
  std::string artist;

public:
  Song(string artist, string title);
  bool rating(int rate);
  std::string get_artist();
  std::string get_title();
  int get_rate();
};


#endif /* SONG_H_ */

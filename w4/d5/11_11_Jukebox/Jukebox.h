/*
 * Jukebox.h
 *
 *  Created on: 2016 nov. 14
 *      Author: win7
 */

#ifndef JUKEBOX_H_
#define JUKEBOX_H_
#include "Song.h"

class Jukebox {
private:
  Song** songs;
  unsigned int song_counter;

public:
  Jukebox();
  void rate(Song& song, int _rate);
  void add_song(Song& song);

  void print_songs();
  void rating(string artist, string title, int rate);
  void print_ratings();
  float get_av_artist_rating(string artist);
};

#endif /* JUKEBOX_H_ */

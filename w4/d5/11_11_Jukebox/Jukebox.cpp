/*
 * Jukebox.cpp
 *
 *  Created on: 2016 nov. 14
 *      Author: win7
 */

#include "Jukebox.h"
#include "Song.h"

Jukebox::Jukebox() {
  song_counter = 0;
  songs = 0;
  }

  void Jukebox::rate(Song& song, int _rate) {
    song.rating(_rate);
  }

  void Jukebox::add_song(Song& song) {
    Song** temp = new Song*[song_counter + 1];
      if (songs != 0) {
        for (unsigned int i = 0; i < song_counter; i++) {
        temp[i] = songs[i];
        }
      }
      temp[song_counter] = &song;
      delete[] songs;
      songs = temp;
      song_counter++;
    }

  void Jukebox::print_songs() {
    for (unsigned int i = 0; i < song_counter; i++) {
      cout << songs[i]->get_artist() << ": " << songs[i]->get_title() << endl;
    }
  }

  void Jukebox::rating(string artist, string title, int rate) {
    for (unsigned int i = 0; i < song_counter; i++) {
      if (artist == songs[i]->get_artist() && title == songs[i]->get_title()) {
        songs[i]->rating(rate);
      }
    }
  }

  void Jukebox::print_ratings() {
    for (unsigned int i = 0; i < song_counter; i++) {
      cout << songs[i]->get_rate() << endl;
    }
  }

  float Jukebox::get_av_artist_rating(string artist) {
    float sum_ratings;
    float sum_counter;
    for (unsigned int i = 0; i < song_counter; i++) {
      if (artist == songs[i]->get_artist()){
        sum_ratings += songs[i]->get_rate();
        sum_counter++;
      }
    }
    return sum_ratings / sum_counter;
  }

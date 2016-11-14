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
  int rating_counter = 0;
  int sum_rating = 0;

protected:
  unsigned int rate;
  float av_rate;
  std::string title;
  std::string artist;

public:
  Song();
  virtual ~Song();
  std::string get_artist();
  std::string get_title();

  //ratings
  int get_rate();
  int get_rating_counter();
  virtual bool rating(int rate);
  float average_of_ratings();
};


#endif /* SONG_H_ */

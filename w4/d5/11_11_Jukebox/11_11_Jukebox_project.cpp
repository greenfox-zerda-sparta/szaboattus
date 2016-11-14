//============================================================================
// Name        : 11_11_Jukebox_project.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Song.h"
#include "Rock.h"
#include "Pop.h"
#include "Reggae.h"
#include "Jukebox.h"
using namespace std;


int main() {
  Rock track01 = Rock("Metallica", "Fuel");
  Pop track02 = Pop("P.Daddy", "Elestem a motorral");
  Reggae track03 = Reggae("Bob Márli", "soul rebel");
  Jukebox jukebox;

  track01.rating(4);
  //std::cout << "A szám típusa: " << track01.get_artist() << ", a címe: " << track01.get_title() << ", ratingje: " << track01.get_rate() << endl;

  track02.rating(1);
  track02.rating(4);
  //std::cout << "A szám típusa: " << track02.get_artist() << ", a címe: " << track02.get_title() << ", ratingje: " << track02.get_rate() << endl;
  //std::cout << "Ratings times: " << track02.get_rating_counter() << ", average of ratings: " << track02.average_of_ratings() << endl;

  track03.rating(3);
  //std::cout << "A szám típusa: " << track03.get_artist() << ", a címe: " << track03.get_title() << ", ratingje: " << track03.get_rate() << endl;

  jukebox.add_song(track01);
  jukebox.add_song(track02);
  jukebox.add_song(track03);

  jukebox.rating("Metallica","Fuel",5);
  jukebox.rating("Metallica","Fuel",3);

  //std::cout << "Jukebox soundtrack: " << endl; jukebox.print_songs();

  std::cout << jukebox.get_av_artist_rating("Metallica") << endl;
  return 0;

}

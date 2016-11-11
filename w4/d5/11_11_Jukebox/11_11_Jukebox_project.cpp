//============================================================================
// Name        : 11_11_Jukebox_project.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Song.h"
using namespace std;


int main() {
  Song track01 = Song("Metallica", "Fuel");

  std::cout << "A szám típusa: " << track01.get_artist() << ", a címe: " << track01.get_title() << endl;

  return 0;
}

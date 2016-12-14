//============================================================================
// Name        : color_excercise.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Color.h"
using namespace std;

int main() {
  //Color black;
  //Color lol(100,100,100);
 // Color hex("#ffffff");
  //lol.darken(0.5);
  //cout << (int)lol.get_blue() << " " << (int)lol.get_green() << " " << (int)lol.get_red() << endl;

  Color red(255,0,0);
  Color blue(0,0,255);

  cout << (int)red.get_red() << " " << (int)red.get_green() << " " << (int)red.get_blue() << endl;
  cout << (int)blue.get_red() << " " << (int)blue.get_green() << " " << (int)blue.get_blue() << endl;

  cout << (int)red.blend(blue).get_red() << (int)red.blend(blue).get_green() << (int)red.blend(blue).get_blue();

	return 0;
}

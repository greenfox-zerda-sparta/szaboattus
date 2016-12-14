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
  Color black;
  Color lol(200,200,200);
  Color hex("#ffffff");
  lol.darken(0.5);
  cout << lol.get_blue() << " " << lol.get_green() << " " << lol.get_red() << endl;
	return 0;
}

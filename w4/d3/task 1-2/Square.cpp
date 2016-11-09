/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: win7
 */

#include "Square.h"
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

string* Square::getName() {
  return new string("I'm a Square");
}

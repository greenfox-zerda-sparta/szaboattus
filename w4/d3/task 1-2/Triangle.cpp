/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: win7
 */

#include "Triangle.h"
#include "Shape.h"
#include <iostream>
#include <string>

using namespace std;

string* Triangle::getName() {
  return new string("I'm a Triangle");
}

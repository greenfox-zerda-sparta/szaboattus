/*
 * Shape.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: win7
 */

#include "Shape.h"
#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

string* Shape::getName() {
    return new string("Generic Shape");
  }

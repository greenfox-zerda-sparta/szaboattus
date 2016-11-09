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

Square::Square() {
  side = 0;
}

string* Square::getName() {
  return new string("I'm a Square");
}

void Square::setSquare(int side){
 this->side = side;
}

void Square::getArea() {
  mArea = side * side;
}

int Square::getSide() {
  return side;
}

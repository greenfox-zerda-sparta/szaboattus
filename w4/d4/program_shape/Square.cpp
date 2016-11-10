/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#include "Shape.h"
#include <iostream>
#include "Square.h"

Square::Square(float _w, float _h): Shape(_w, _h) {
  this->calcArea();
}

Square::~Square() {

}

std::string Square::getName() {
  return std::string("Square");
}

void Square::calcArea() {
  this->mArea = this->getWidth() * this->getHeight();
}



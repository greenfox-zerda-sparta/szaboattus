/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#include "Triangle.h"
#include <iostream>
#include "Shape.h"

using namespace std;

Triangle::Triangle(float _w, float _h) : Shape(_w, _h){
  this->calcArea();
}

Triangle::~Triangle() {

}

void Triangle::calcArea() {
  this->mArea = this->getWidth() * this->getHeight() / 2;
}

string Triangle::getName() {
  return std::string("Triangle");
}

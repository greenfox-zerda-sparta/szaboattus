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

Triangle::Triangle() {

}

string* Triangle::getName() {
  return new string("I'm a Triangle");
}

void Triangle::setTriangle(int height, int width){
 this->width = width;
 this->height = height;
}

void Triangle::getArea() {
  mArea = 0.5 * width * height;
}

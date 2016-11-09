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

Shape::Shape() {
  this->mArea = 0;
}

string* Shape::getName() {
    return new string("Generic Shape");
  }

void Shape::getArea() {

}

int Shape::get_mArea() {
  return mArea;
}

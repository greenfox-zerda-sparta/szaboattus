/*
 * Circle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

Circle::Circle(int radius) {
  this->radius = radius;
}

int Circle::getRadius(){
  return radius;
}

int Circle::get_circumference() {
  return 2 * radius * 3.14159;
}

int Circle::get_area() {
  return radius * radius * 3.14159;
}

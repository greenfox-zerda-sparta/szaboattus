/*
 * Shape.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */
#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(float _w, float _h) {
  this->mWidth = _w;
  this->mHeight = _h;
}

Shape::~Shape() {

}

void Shape::setWidth (float _width) {
  this->mWidth = _width;
}

void Shape::setHeight (float _height) {
  this->mHeight = _height;
}

float Shape::getHeight() {
  return this->mHeight;
}

float Shape::getWidth() {
  return this->mWidth;
}

float Shape::getmArea() {
  return this->mArea;
}

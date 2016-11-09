/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 9
 *      Author: win7
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Triangle : public Shape {
public:
  Triangle();
  string* getName();
  void getArea();
  void setTriangle(int, int);

private:
  int width = 10;
  int height = 20;
};

#endif /* TRIANGLE_H_ */

/*
 * Shape.h
 *
 *  Created on: 2016 nov. 9
 *      Author: win7
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Shape {
public:
  Shape();
  virtual string* getName();
  virtual void getArea();
  int get_mArea();

  virtual ~Shape() {
  }

protected:
  int mArea;
};

#endif /* SHAPE_H_ */

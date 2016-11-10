/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;


class Triangle : public Shape {
  protected:
    void calcArea();

  public:
    Triangle(float _w, float _h);
    string getName();
    ~Triangle();
};

#endif /* TRIANGLE_H_ */

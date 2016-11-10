/*
 * Square.h
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include "Shape.h"
#include <iostream>

using namespace std;

class Square : public Shape {
  protected:
    void calcArea();

  public:
    Square(float _w, float _h);
    std::string getName();
    ~Square();
};

#endif /* SQUARE_H_ */

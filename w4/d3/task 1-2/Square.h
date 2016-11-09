/*
 * Square.h
 *
 *  Created on: 2016 nov. 9
 *      Author: win7
 */

#ifndef SQUARE_H_
#define SQUARE_H_
#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

class Square : public Shape {
public:
  string* getName();
};

#endif /* SQUARE_H_ */

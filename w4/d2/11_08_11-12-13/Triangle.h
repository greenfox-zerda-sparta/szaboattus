/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
#include <string>

using namespace std;

class Triangle {
public:

Triangle();
void draw_triangle(int length);
void draw_double_triangle(int length);
void draw_diamond(int length);

private:
  int length;
};

#endif /* TRIANGLE_H_ */

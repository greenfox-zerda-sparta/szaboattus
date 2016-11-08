/*
 * Circle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include <string>

using namespace std;

class Circle {

public:
    Circle(int);

    int get_circumference();

    int get_area();

    int getRadius();

private:
    int radius;
};

#endif /* CIRCLE_H_ */

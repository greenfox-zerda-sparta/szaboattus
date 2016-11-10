/*
 * Shape.h
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <iostream>

using namespace std;

class Shape {
  private:
    float mHeight;
    float mWidth;

  protected:
    float mArea;
    virtual void calcArea() = 0;

  public:
    Shape(float _width, float _height);
    void setWidth (float _width);
    void setHeight (float _height);

    float getHeight();
    float getWidth();
    float getmArea();

    virtual string getName() = 0;

    virtual ~Shape();
};

#endif /* SHAPE_H_ */

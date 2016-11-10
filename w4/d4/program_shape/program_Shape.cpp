// Add a variable to the Shape class. Make it "protected".
//    This should be called mArea.
// Create a function that calculates the areas of the shape.
// Update the shapes Triangle and Square to have variables that represent their dimensions,
//   that you will need to calculate the area. One whould be width, the other height.
// Implement getter and setter functions for them.
// Make sure to call the function that calculates the area and stores it in mArea,
//   in the setter functions.
// Create a constructor that takes the height and width as it's parameters.
// Create a destructor, that destructs the objects.
//
// Write code into the main function that uses these.
// Make sure it demonstrates how the class works by printing out the results.

#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"

int main(int argc, char** argv) {
  Shape* a = new Triangle(3, 5);
  Shape* b = new Square(3, 5);
  std::cout << "I'm a " << a->getName() << " and I'm " << a->getmArea() << " big." << std::endl;
  std::cout << "I'm a " << b->getName() << " and I'm " << b->getmArea() << " big." << std::endl;

 // b->setWidth(2.0);
 // std::cout << "I'm a " << b->getName() << " and I'm " << b->getArea() << " big." << std::endl;
 // b->setHeight(3.0);
 // std::cout << "I'm a " << b->getName() << " and I'm " << b->getArea() << " big." << std::endl;
}

#include <iostream>
#include <string>
#include "Triangle.h"
#include "Square.h"
#include "Shape.h"
using namespace std;

//TASK 1, 2 inside!!

// Create 2 classes which inherit from the above defined class, Shape
// One should be Triangle, the other Square.
// Create their getName function based on the above example.
// Then watch what the code below does.
// If You find any typos, etc, correct them.

//task 2 :
// First, move the previous code to new hpp and cpp files for each class.
// Include them into this file.
// Make sure they include each other when needed.
// Make sure the code below still works.

//task 3:

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


int main() {
  Shape* shape = new Shape();
  Triangle* triangle = new Triangle();
  Square* square = new Square();
  Shape* a;
  cout << "I am a...  " << *shape->getName() << endl;
  cout << "I am a...  " << *triangle->getName() << endl;
  cout << "I am a...  " << *square->getName() << endl;

  a = square;
  cout << "I am a...  " << *a->getName() << endl;

  square->setSquare(10);
  cout << "Square side: " << square->getSide() << endl;
  square->getArea();
  cout << "Square mArea: " << a->get_mArea() << endl;

  a = triangle;
  cout << "I am a...  " << *a->getName() << endl;

  triangle->setTriangle(3,6);
  triangle->getArea();
  cout << "Triangle mArea: " << a->get_mArea() << endl;

  return 0;
}

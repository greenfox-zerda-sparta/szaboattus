// task 11 - 12 - 13 inside!!!

#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;

int main() {

  Triangle triangle1 = Triangle();

  triangle1.draw_triangle(8);
  cout << endl;
  triangle1.draw_double_triangle(8);
  cout << endl;
  triangle1.draw_diamond(8);

    // Create a triangle class that takes a length parameter and prints a triangle like this:
    //   *
    //   **
    //   ***
    //   ****
    //   *****
    //   ******
    // It should take a number as parameter that describes how many lines the triangle has

  return 0;
}

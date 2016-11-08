#include <iostream>
#include <string>

#include "Circle.h"

using namespace std;

int main() {

Circle circle1(3);
cout << circle1.getRadius() << endl;
cout << "A kör kerülete: " <<circle1.get_circumference() << endl;
cout << "A kör területe: " <<circle1.get_area() << endl;

    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

  return 0;
}

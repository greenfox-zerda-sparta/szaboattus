#include <iostream>
#include <string>
#include "car.h"

using namespace std;

int main() {
  Car car1("Porsche",3422);
  cout << "Az autós típusa: " << car1.get_type() << ", az autó km óra állása: " << car1.get_km() << endl;

  car1.run(1000);
  cout << "Új megtett km: " << car1.get_km() << endl;

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

  return 0;
}

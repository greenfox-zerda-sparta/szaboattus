#include <string>
#include <iostream>

using namespace std;

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

void print_a_car(Car car){
  string car_names[4] = {"VOLVO", "TOYOTA", "LAND_ROVER", "TESLA"};

    if (car.type != TESLA) {
      cout << car_names[car.type] << endl << car.km << endl << car.gas << endl;
    }
    else {
      cout << car_names[car.type] << endl << car.km << endl;
    }
}

int main() {
  Car car = {VOLVO, 115000, 43};
  print_a_car(car);
  return 0;
}

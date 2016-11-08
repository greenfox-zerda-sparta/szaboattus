/*
 * Car.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#include "Car.h"
#include <iostream>
#include <string>
#include "car.h"

using namespace std;

Car::Car(string type, int km) {
  this->type = type;
  this->km = km;
}

int Car::get_km(){
  return km;
}

string Car::get_type(){
  return type;
}

void Car::run(int input) {
  km = km + input;
}

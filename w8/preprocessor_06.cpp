//============================================================================
// Name        : preprocessor_06.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#define MY_PI 3,14159

using namespace std;

// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.


int main() {
  srand(0);
  int array[5];
  int circumference;
  int area;
  for (int i = 0; i < 5; i++) {
    array[i] = rand() % 50 + 1;
    circumference = 2 * array[i] * MY_PI;
    area = array[i]* array[i] * MY_PI;
    cout << i + 1 << ". kör sugara: " << circumference << ", területe: " << area << endl;
  }
	return 0;
}

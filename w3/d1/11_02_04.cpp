#include <iostream>

using namespace std;

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 4, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int* range(int from, int to, int step) {
  int size = (to - from) /step;
  cout << size << endl << endl;
  int * pointer;
  pointer = new int[size];

  for (int i = 0; i < size; i++) {
      pointer[i] = from;
      from += step;
    }
  return pointer;
}

int main() {
  int from, to, step;
  cout << "Mettől?" << endl;
  cin >> from;
  cout << "Meddig?" << endl;
  cin >> to;
  cout << "Lépésköz?" << endl;
  cin >> step;

  int * array = range(from, to, step);

  for (int i = 0; i < (to - from) /step ; i++) {
  cout << array[i] << endl;
  }
  delete[] array;
  return 0;
}

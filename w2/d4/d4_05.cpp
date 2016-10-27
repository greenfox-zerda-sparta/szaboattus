#include <iostream>

using namespace std;

// Write a function that decides if an array includes at least one negative number or not


bool havenegative(int *numbers, int length) {
  bool ifnegative = 0;
  for (int i =0; i < length; i++) {
    if (numbers[i] < 0) {
      ifnegative = 1;
      break;
    }
  }
  cout << ifnegative;
  return ifnegative;
}

int main() {
  int numbers[] = {6, 5, 3, -4, 1, 8, 7};
  int length = 6;
  havenegative(numbers, length);
  return 0;
}

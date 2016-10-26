#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  int* number_pointer = &number;
  // update the value of number variable to 42 using the "number_pointer"
  //number = 42;
  // *number_pointer = 1234
  *number_pointer = 42;
  cout << number;
  return 0;
}

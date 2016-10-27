#include <iostream>

using namespace std;

void drawtriangle(int size) {
  for (int i = 1; i <= size; i++) {
    for (int k = 1; k <= i; k++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument
  int size = 8;
  drawtriangle(size);
  return 0;
}

#include <iostream>

using namespace std;

void drawtriangle(int size) {
  int k = 0;
  for(int i = 1; i <= size; ++i) {
          for(int space = 1; space <= size -i; ++space) {
             cout<<"  ";
          }
          while(k!=2*i-1) {
             cout<<"* ";
             ++k;
          }
          k=0;
          cout << endl;
      }
}

int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument

  int size = 5;
  drawtriangle(size);
  return 0;
}

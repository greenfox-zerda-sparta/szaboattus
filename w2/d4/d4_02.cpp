#include <iostream>

using namespace std;

// write a function that takes an array and a length and it fills the array
 // with numbers from zero till the length

void makearray(int *array, int length) {
  for (int i = 0; i < length; i++) {
    array[i] = i;
    cout << array [i] << " ";
  }

}

int main() {
  int array[10];
  makearray(array,10);

  return 0;
}

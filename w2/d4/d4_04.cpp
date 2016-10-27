#include <iostream>

using namespace std;
// Write a function that takes an array and its length than reverses the array

int reverse(int *array, int length) {
  int temp = 0;
    for (int i = 0; i < length /2; i++) {
    temp = array[length -i -1];
    array[length -i -1] = array[i];
    array[i] = temp;
   }
  return *array;
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int length = 8;
  reverse(array,length);
  for (int i = 0; i < 8; i++) {
  cout << array[i] << " ";
  }
  return 0;
}

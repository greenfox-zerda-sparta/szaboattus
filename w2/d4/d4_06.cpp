#include <iostream>
#include <string>

using namespace std;

// Write a function that counts how many times is an even number is folowed by
// another even number in an array

void  followtime(int *numbers, int length) {
  int times = 0;
  for (int i = 0; i < length-1; i++) {
    if ((numbers[i] %2 ==0) && (numbers[i+1] %2 ==0)) {
      times++;
    }
  }
  cout << times;
}

int main() {
  int numbers[] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
  int length = sizeof(numbers) / sizeof(int);
  followtime(numbers,length);
  return 0;
}

#include <iostream>
#include <string>

using namespace std;

int index(int numbers[], int length, int thenumber) {
         for (int i=0; i<length; i++) {
                if (thenumber == numbers[i]) {
                  return i;
                }
         }
    return -1;
}

int main() {
  int numbers[] = {7 ,5 ,8 ,-1 ,2};
  // Write a function that takes an array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)
  int length= sizeof(numbers) / sizeof(int);
  cout<<"The index of the number is "<< index(numbers,length,2);
  return 0;
}

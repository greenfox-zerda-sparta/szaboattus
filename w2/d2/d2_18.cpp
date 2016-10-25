#include <iostream>
using namespace std;

int even (int numbers[], int length) {
  int num=0;
    for (int i=0; i<length; i++) {
      if (numbers[i]%2 == 0) {
        num++;
      }
    }
  cout<<"Páros számok összege: "<<num;
  return 0;
}

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5, 10};
  int length = sizeof(numbers) / sizeof(int);
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array
  even(numbers, length);
  return 0;
}

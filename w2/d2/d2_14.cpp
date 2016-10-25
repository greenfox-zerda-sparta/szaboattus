#include <iostream>
#include <string>

using namespace std;

int minimum (int numbers[],int lenght) {
  int min=numbers[0];
  for (int i=0; i<lenght; i++){
    if (numbers[i]<min) {
      min=numbers[i];
    }
  }
  return min;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  int lenght= sizeof(numbers) / sizeof(int);
  // Write a function that takes an array and its length returns the minimal element
  // in the array (your own min function)
  cout << minimum(numbers,lenght);
  return 0;
}

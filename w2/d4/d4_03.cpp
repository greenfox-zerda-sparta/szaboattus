#include <iostream>

using namespace std;

void swap(int *point1val, int *point2val) {
  int *temp = point1val;
  point1val = point2val;
  point2val = temp;
}

int main() {
  int first = 12;
  int second = 54;
  cout << first << " " << second << endl;
  swap(first,second);
  cout << first << " " << second;

  // Write a function that takes two int pointers and swaps the values where the pointers point

  return 0;
}

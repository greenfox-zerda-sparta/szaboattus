#include <iostream>
#include <string>

using namespace std;

template <class ATTUS>

double sumofElements ( ATTUS* array, int x) {
  double sum = 0;
  for (int i = 0; i < x; i ++) {
    sum += array [i];
  }
  return sum;
}


template <>
double sumofElements<char>(char* array, int x) {
  int sum = 0;
  for (int i = 0; i < x; i ++) {
    sum += int(array[i] - 96);
  }
  return sum;
}

int main() {
  // Create a function template that takes an array, and its length and return the sum of it elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet

  int x = 4;
  int array[x] = {1, 2, 3, 4};
  char array2[x] = {'a', 'b', 'c', 'd'};

  cout << sumofElements (array2, x);

  return 0;
}

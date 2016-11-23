#include <iostream>
#include <string>

using namespace std;

template <class ATTUS>

void printelements(ATTUS x, ATTUS* array) {
  for (int i = 0; i < x; i++) {
    cout << array[i] << " ";
  }
}


int main() {
  // create a function template which takes in an array, and the size of it
  // print all the elements of the array

  int array[4] = {1, 2, 3, 4};
  printelements(4, array);

  return 0;
}

#include <iostream>
#include <string>

using namespace std;

template <class ATTUS>

ATTUS printfirst (ATTUS* array) {
  return array[1];
}

int main() {
  // create a function template the takes in a fix long array and prints the 1st element of it
  int array[3] = {1, 2, 3};
  cout << printfirst(array);
  return 0;
}

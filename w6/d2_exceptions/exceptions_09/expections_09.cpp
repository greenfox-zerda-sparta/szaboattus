#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

// Duplicate the Stack class from the previous exercises.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for the two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.

int main() {
  Stack stack;

  try {
  stack.pop(1);
  stack.pop(1);
  stack.pop(1);
  stack.pop(1);
  stack.pop(1);
  stack.pop(1);
  }
  catch (status &x){
  cout << stack.interpretException(x);
  }
  return 0;
}

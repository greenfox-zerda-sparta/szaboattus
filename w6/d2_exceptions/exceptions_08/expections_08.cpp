#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error.
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
// Illustrate in the main function both when it works fine and when exceptions occur.

int main() {
  Stack stack;

  try {
  stack.push(1);
  stack.push(1);
  stack.push(1);
  stack.push(1);
  stack.push(1);
  stack.push(1);
  }
  catch (int x){
  cout << stack.interpretException(x);
  }
  return 0;
}

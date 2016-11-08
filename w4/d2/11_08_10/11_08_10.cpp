#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main() {
    // Create a `Stack` class that stores elements
    // It should have a `size` method that returns number of elements it has
    // It should have a `push` method that adds an element to the stack
    // It should have a `pop` method that returns the last element form the stack and also deletes it from it

  Stack stack1 = Stack();

  stack1.Push(3);
  stack1.Push(4);

  cout << stack1.SizeOfStack() << endl;

  stack1.Pop();
  cout << stack1.SizeOfStack() << endl;

  return 0;
}

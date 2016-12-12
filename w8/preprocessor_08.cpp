//============================================================================
// Name        : preprocessor_08.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#define errormess(a) {if( a == 0) {std::cout << "this is an error message" << std::endl;}}

int main() {
  bool a = false;
  errormess(a);
  return 0;
}

//============================================================================
// Name        : preprocessor_04.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#define str(a) #a


// Create a function like macro.
// It's job is to turn something written in code into a string.
// It should be called str(a).
// Try out the code below. See what happens!


int main() {
  int a = 22;
  int b = 24;
  if(a < b) {
    std::cout<< str(a > b) << "  a: " << a << " b: " << b << std::endl;
  }
  return 0;
}

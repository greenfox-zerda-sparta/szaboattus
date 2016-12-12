//============================================================================
// Name        : preprocessor_05.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifdef __DEBUG
#define func(a) {std::cout << "DEBUG: " << #a << " " << a;
#else
#define func(a) {std::cout << "RELEASE: " << #a << " " << a;}
#endif

// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

int main() {
  int a = 66;
  func(a);
	return 0;
}

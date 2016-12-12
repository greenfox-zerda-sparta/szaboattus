//============================================================================
// Name        : preprocessor_07.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#define print(a) {std::cout << #a << " " << a;}

// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

int main() {
	int a = 323;
	print(a);
	return 0;
}

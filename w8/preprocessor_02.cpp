//============================================================================
// Name        : preprocessor_02.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#define STRING "szöveg 1"

int main() {
	cout <<  STRING << endl;

#undef STRING
#define STRING "szöveg 2"

	cout <<  STRING << endl;

	return 0;
}

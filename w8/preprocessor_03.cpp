//============================================================================
// Name        : preprocessor_03.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#ifdef _LOG
#define MYCONST 8
#else
#define MYCONST 2
#endif

#include <iostream>
using namespace std;

// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is what we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

int main() {
	cout << MYCONST << endl; // prints
	return 0;
}

#include <iostream>
#include <string>


  // create a function that returns it's input factorial


using namespace std;

int factorial(int n) {
	if(n == 1) {
		return 1;
	}
	else {
		return n * factorial(n-1);
	}
}

int main() {

	cout << factorial(6);
  return 0;
}

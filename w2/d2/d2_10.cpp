#include <iostream>
#include <string>

using namespace std;

void doublee (int j){
	j=j*2;
	cout << j;
}

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  doublee(j);
  return 0;
}

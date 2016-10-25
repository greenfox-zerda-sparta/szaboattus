#include <iostream>
#include <string>

using namespace std;

void greet(string i){
	cout<<"Szevasz " << i <<"!";
}

int main() {
  string i = "Jozsi";
  // create a function that takes a string argument and greets it.
  greet(i);
  return 0;
}

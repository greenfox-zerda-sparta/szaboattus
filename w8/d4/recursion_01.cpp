#include <iostream>
#include <string>

using namespace std;

int factorial_funct(int n) {
  n--;
  cout << n << endl;
  if (n != 0) {
    factorial_funct(n);
  }
  return n;
}

int main() {
// write a recursive function
// that takes one parameter: n
// and counts down from n

  int n = 10;
  factorial_funct(n);

  return 0;
}

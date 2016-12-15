#include <iostream>
#include <string>

using namespace std;

int factorial_funct(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    factorial_funct(n-1);
    cout << n << endl;
    return 1;
  }
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n

  int n = 15;
  factorial_funct(n);

  return 0;
}

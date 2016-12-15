#include <iostream>
#include <string>

using namespace std;

int factorial_funct(int base, int n) {
  if (n == 0) {
    return 1;
  }
  else {
    return base * (factorial_funct(base, n-1));
  }
  return base;
}

int main() {
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
  int base = 3;
  int n = 4;
  cout << factorial_funct(base, n);
  return 0;
}

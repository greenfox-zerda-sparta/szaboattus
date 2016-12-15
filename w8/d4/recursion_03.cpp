#include <iostream>
#include <string>

using namespace std;

int factorial_funct(int n) {
  int sum = 0;
  sum += n % 10;
  if (n != 0) {
    n = n / 10;
    sum += factorial_funct(n);
  }
  return sum;
}

int main() {
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

  int n = 999;
  cout << factorial_funct(n);
  return 0;
}

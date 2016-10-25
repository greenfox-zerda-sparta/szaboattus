#include <iostream>
using namespace std;

int prim(int number) {

  if (number ==2 || number ==3 || number ==5 || number ==7) {
  cout << "It is a prime number";
  }
  else {
    if (number%2 !=0 && number%3 !=0 && number%5 !=0 && number%7 !=0) {
      cout << "It is a prime number";
    }
    else {
      cout << "It is NOT a prime number";
    }
  }
  return 0;
}

int main(){
  int number = 23;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.
  prim(number);
  return 0;
}

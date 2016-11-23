#include <iostream>
#include <string>

using namespace std;

template <class ATTUS1, class ATTUS2>

void printbigger(ATTUS1 a, ATTUS2 b) {
  cout << sizeof(a) << endl;
  cout << sizeof(b) << endl;
  if (sizeof(a) > sizeof(b)) {
    cout << a;
  }
  else {
    cout << b;
  }
}

int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then
  double a = 4;
  int b = 3;
  printbigger(a, b);

  return 0;
}

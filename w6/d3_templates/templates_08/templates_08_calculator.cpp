#include <iostream>
#include <string>
#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;

int main() {
	//Create a class template for a calculator
        //it should have all the basic methods: add, subtract, multiply, divide
        //use exceptions to handle errors in special cases! (find the special cases!)

  try {
  Calculator <int>calculator;
  calculator.add(3,6);
  }
  catch (int x){
    switch(x) {
          case 0:
            cout << "Error: divide by 0";
            break;
          case 1:
            cout << "Error: can't count with char";
            break;
          case 2:
            cout << "Error: can't count with string";
            break;
    }
  }
  return 0;
}

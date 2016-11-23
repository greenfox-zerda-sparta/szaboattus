/*
 * Calculator.h
 *
 *  Created on: 2016 nov. 23
 *      Author: win7
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include<string>

template <class T>

class Calculator {
private:
  T num1;
  T num2;
  T result;
public:
  Calculator();
  void add(T a, T b);
  void subtract(T a, T b);
  void multiply(T a, T b);
  void divide(T a, T b);

  T getResult();
};

template <>
class Calculator<char> {
public:
  Calculator() {
    throw 1;
  }
};

template <>
class Calculator<std::string> {
public:
  Calculator() {
    throw 2;
  }
};


#endif /* CALCULATOR_H_ */

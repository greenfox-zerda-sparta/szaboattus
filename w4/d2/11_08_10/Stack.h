/*
 * Stack.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include <string>

using namespace std;

class Stack {
public:
  Stack();
  ~Stack();

  int SizeOfStack();

  void Push(int value);

  double Pop();

private:

  double* data = new double[size];
  int size = 16;
  int currentsize = 0;

};

#endif /* STACK_H_ */

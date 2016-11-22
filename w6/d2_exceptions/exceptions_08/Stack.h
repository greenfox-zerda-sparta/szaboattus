/*
 * Stack.h
 *
 *  Created on: 2016 nov. 22
 *      Author: win7
 */

#ifndef STACK_H_
#define STACK_H_
#include<iostream>

class Stack {
private:
  int stack_counter;
  int array[5];
public:
  Stack();
  void push(int x);
  int pop(int x);
  std::string interpretException(int exception);
};

#endif /* STACK_H_ */

/*
 * Stack.cpp
 *
 *  Created on: 2016 nov. 22
 *      Author: win7
 */

#include "Stack.h"

Stack::Stack() {
  this->stack_counter = 0;
}

void Stack::push(int x) {
  if (stack_counter < 5) {
    throw 1;
  }
  array[stack_counter] = x;
  stack_counter++;
}

int Stack::pop(int x) {
  if (stack_counter == 0) {
    throw 2;
  }
  stack_counter--;
  return array[stack_counter];
}

std::string Stack::interpretException(int exception) {
    switch(exception) {
      case 1: return "the stack is full";
      break;
      case 2: return "the is already empty";
    }
    return 0;
}

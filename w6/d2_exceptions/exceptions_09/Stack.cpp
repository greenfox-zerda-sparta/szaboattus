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
    throw full;
  }
  array[stack_counter] = x;
  stack_counter++;
}

int Stack::pop(int x) {
  if (stack_counter == 0) {
    throw empty;
  }
  stack_counter--;
  return array[stack_counter];
}

std::string Stack::interpretException(status exception) {
    switch(exception) {
      case full : return "the stack is full";
      break;
      case empty : return "the is already empty";
    }
    return 0;
}

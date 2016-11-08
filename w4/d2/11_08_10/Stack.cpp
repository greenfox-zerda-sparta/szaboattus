/*
 * Stack.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack() {
  }

Stack::~Stack() {
  delete[] data;
}

int Stack::SizeOfStack() {
  return currentsize;
}

void Stack::Push(int value) {
  data[currentsize] = value;
  currentsize++;
  if (size > size * 0.8) {
  size *=2;
  double *temp_array = new double[size];
  for (int i = 0; i < size; i++) {
    temp_array[i] = this->data[i];
  }
  delete[] this-> data;
  this->data = temp_array;
  }
}

double Stack::Pop() {
  --currentsize;
  return this->data[currentsize];
}

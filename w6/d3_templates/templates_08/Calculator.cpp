/*
 * Calculator.cpp
 *
 *  Created on: 2016 nov. 23
 *      Author: win7
 */

#include "Calculator.h"

template <class T>
Calculator<T>::Calculator() {
  this->result = 0;
}

template <class T>
void Calculator<T>::add(T a, T b) {
  this->result = a + b;
}

template <class T>
void Calculator<T>::subtract(T a, T b) {
  this->result = a - b;
}

template <class T>
void Calculator<T>::multiply(T a, T b) {
  this->result = a * b;
}

template <class T>
void Calculator<T>::divide(T a, T b) {
  if (b == 0) {
     throw 0;
  }
  this->result = a / b;
}

template <class T>
T Calculator<T>::getResult() {
  return this->result;
}

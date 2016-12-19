/*
 * Fibonacci.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: win7
 */

#include "Fibonacci.h"

Fibonacci::Fibonacci() {}

int Fibonacci::fib_numb(int x) {
  if (x <= 1) {
    return x;
  }
  return fib_numb(x - 1) + fib_numb(x - 2);
}

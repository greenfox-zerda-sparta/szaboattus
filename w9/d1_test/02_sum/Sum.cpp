/*
 * Sum.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: win7
 */

#include "Sum.h"

Sum::Sum() {}

int Sum::sum(vector <int>& V) {
  int sum_of_numbers;
  for (vector <int>::iterator it = V.begin(); it != V.end(); it++) {
      sum_of_numbers += *it;
  }
  return sum_of_numbers;
}

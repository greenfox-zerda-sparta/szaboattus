/*
 * Student.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() {
  average = 0;
  count_grades = 0;
}

void Student::add_grade(int x) {
  grades[count_grades] = x;
  ++count_grades;
}

float Student::calc_average() {
  for (int i = 0; i < count_grades; i++) {
  average = average + grades[i];
  }
  average = average / count_grades;
}

float Student::get_average() {
  return average;
}

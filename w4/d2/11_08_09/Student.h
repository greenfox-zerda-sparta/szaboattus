/*
 * Student.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
using namespace std;

class Student {
public:

  Student();

  void add_grade(int x);
  float calc_average();
  float get_average();

private:
  int grades[50];
  int count_grades;
  float average;
};

#endif /* STUDENT_H_ */

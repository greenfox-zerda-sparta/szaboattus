#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {

  Student student1 = Student();

  student1.add_grade(1);
  student1.add_grade(3);
  student1.add_grade(4);
  student1.add_grade(1);
  student1.add_grade(3);
  student1.add_grade(3);
  student1.add_grade(3);

  student1.calc_average();

  cout << "A student1 átlaga: " << student1.get_average() << endl;

    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

  return 0;
}

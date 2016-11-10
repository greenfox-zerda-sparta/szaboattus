/*
 * ChildClass.h
*/

#ifndef CHILDCLASS_H_
#define CHILDCLASS_H_
#include <iostream>
#include <string>
#include "ParentClass.h"

using namespace std;

class ChildClass : public ParentClass {
  public:
    ChildClass();
    string dogsear();
    string dogsearV();
};

#endif /* CHILDCLASS_H_ */

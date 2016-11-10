/*
 * ParentClass.h
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#ifndef PARENTCLASS_H_
#define PARENTCLASS_H_
#include <iostream>
#include <string>

using namespace std;

class ParentClass {
  public:
    ParentClass();
    string dogsear();
    virtual string dogsearV();
};

#endif /* PARENTCLASS_H_ */

/*
 * ChildClass.cpp
 *
 *  Created on: 2016 nov. 10
 *      Author: win7
 */

#include "ChildClass.h"
#include <iostream>
#include <string>
#include "ParentClass.h"

using namespace std;

ChildClass::ChildClass() {

}

string ChildClass::dogsear() {
  return string("Csáld kutyafüle sima");
}

string ChildClass::dogsearV() {
  return string("Csáld kutyafüle virtual");
}


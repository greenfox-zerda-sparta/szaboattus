/*
 * Car.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef CAR_H_
#define CAR_H_
#include <iostream>
#include <string>

using namespace std;

class Car {

public:

Car(string, int);

int get_km();

string get_type();

void run(int input);


private:
int km;
string type;
};

#endif /* CAR_H_ */

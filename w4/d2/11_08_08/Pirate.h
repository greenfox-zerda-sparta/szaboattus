/*
 * Pirate.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef PIRATE_H_
#define PIRATE_H_

#include <iostream>
#include <string>
using namespace std;

class Pirate {

  public:

  Pirate();

  int get_drinking_times();
  void drink_rum();
  void hows_goin_mate();


  private:
  int drinking_times;

};

#endif /* PIRATE_H_ */

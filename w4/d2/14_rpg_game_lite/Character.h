/*
 * Character.h
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_
#include <iostream>
#include <string>

using namespace std;

class Character {
public:
  Character(string, int, int, int);

  void attacking(Character&, Character&);
  int get_hp();


private:
  string name;
  int character_type;
  int hp = 100;
  int attack;
  int defense;
};

#endif /* CHARACTER_H_ */

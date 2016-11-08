/*
 * Character.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: win7
 */

#include "Character.h"
#include <iostream>
#include <string>

using namespace std;

Character::Character(string name, int character_type, int attack, int defense) {
  this->name = name;
  this->character_type = character_type;
  this->attack = attack;
  this->defense = defense;
}

void Character::attacking(Character& player1, Character& player2) {
  int dmg = player2.defense - player1.attack;
  if (dmg < 0) {
    player2.hp =player2.hp + dmg;
  }
}

int Character::get_hp() {
  return hp;
}

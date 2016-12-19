/*
 * WordToolBox.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: win7
 */

#include "WordToolBox.h"
#include <algorithm>
#include <vector>

WordToolBox::WordToolBox(string _stringHeld) {
  stringHeld = _stringHeld;
}

string WordToolBox::get_stringHeld() {
  return stringHeld;
}

void WordToolBox::set_stringHeld(string str) {
  stringHeld = str;
}

int WordToolBox::countHowMany(char charToFind) {
  if (stringHeld == "") throw "no char added";
  int sum = 0;
  for (string::iterator it = stringHeld.begin(); it != stringHeld.end(); it++) {
    if (*it == charToFind) {
      sum++;
    }
  }
  if (sum == 0) throw "the char is not included in the string";
  return sum;
}

string WordToolBox::removespace(string str) {
  string temp = "";
  for (string::iterator it = str.begin(); it != str.end(); it++) {
    if (*it != ' ') {
      temp += *it;
    }
  }
  return temp;
}

string WordToolBox::sortString(string str) {
  sort(str.begin(), str.end());
  return str;
}

bool WordToolBox::isAnagram(string stringToCheck) {
  unsigned int is_anagramma = 0;
  removespace(stringToCheck);
  removespace(stringHeld);
  sortString(stringToCheck);
  sortString(stringHeld);
  for (unsigned int i = 0; i < stringToCheck.size(); i++) {
    if (stringToCheck[i] == stringHeld[i]) {
      is_anagramma++;
    }
  }
  return (is_anagramma == stringToCheck.size());
}

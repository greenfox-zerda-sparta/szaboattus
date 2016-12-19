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

bool WordToolBox::isTheStringEmpty(string str) {
  return (str == "");
}

string WordToolBox::removespace(string str) {
  if (isTheStringEmpty(str)) throw "no string added";
  string temp = "";
  for (string::iterator it = str.begin(); it != str.end(); it++) {
    if (*it != ' ') {
      temp += *it;
    }
  }
  return temp;
}

string WordToolBox::sortString(string str) {
  if (isTheStringEmpty(str)) throw "no string added";
  sort(str.begin(), str.end());
  return str;
}

bool WordToolBox::isAnAnagram(string stringToCheck) {
  if (isTheStringEmpty(stringToCheck)) throw "no string added";
  return sortString((removespace(stringToCheck))) == sortString((removespace(stringHeld)));
}

/*
 * WordToolBox.h
 *
 *  Created on: 2016 dec. 19
 *      Author: win7
 */

#ifndef WORDTOOLBOX_H_
#define WORDTOOLBOX_H_
#include <iostream>
using namespace std;

class WordToolBox {
private:
  string stringHeld;
public:
  WordToolBox(string _stringHeld);
  string get_stringHeld();
  void set_stringHeld(string str);
  bool isTheStringEmpty(string str);
  bool isAnAnagram(string stringToCheck);
  int countHowMany(char charToFind);
  string removespace(string str);
  string sortString(string str);
};

#endif /* WORDTOOLBOX_H_ */

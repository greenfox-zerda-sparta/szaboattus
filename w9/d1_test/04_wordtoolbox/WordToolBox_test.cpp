/*
 * WordToolBox_test.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: win7
 */
#define CATCH_CONFIG_MAIN
#include "WordToolBox.h"
#include <iostream>

#ifndef CATCH_CONFIG_MAIN
int main(){
  WordToolBox wordtoolbox("index kaszabol");
  //std::cout << "countHowMany(\"a\")= " << wordtoolbox.countHowMany('a') << std::endl;

  string alternatives[1] = {"szabad lexikon"};
  for (int i = 0; i < 1; ++i) {
    cout << "is -" << alternatives[i] << "- an anagram of -" << wordtoolbox.get_stringHeld() << "- = " << wordtoolbox.isAnAnagram(alternatives[i]) << endl;
  }
  return 0;
}
#endif

#ifdef CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE("WordToolBox constructor") {
  WordToolBox wordtoolbox("motherfucker");
  REQUIRE(wordtoolbox.get_stringHeld() == "motherfucker");
}

TEST_CASE("WordToolBox countHowMany with empty string") {
  WordToolBox wordtoolbox("");
  CHECK_THROWS(wordtoolbox.countHowMany('e'));
}

TEST_CASE("WordToolBox countHowMany char not included in the string") {
  WordToolBox wordtoolbox("motherfucker");
  CHECK_THROWS(wordtoolbox.countHowMany('a'));
}

TEST_CASE("WordToolBox countHowMany count") {
  WordToolBox wordtoolbox("motherfucker");
  REQUIRE(wordtoolbox.countHowMany('e') == 2);
}

TEST_CASE("WordToolBox removespace") {
  WordToolBox wordtoolbox("apple apple");
  REQUIRE(wordtoolbox.removespace("apple apple") == "appleapple");
}

TEST_CASE("WordToolBox removespace char not included in the string") {
  WordToolBox wordtoolbox("apple apple");
  CHECK_THROWS(wordtoolbox.removespace(""));
}

TEST_CASE("WordToolBox sortString") {
  WordToolBox wordtoolbox("apple");
  REQUIRE(wordtoolbox.sortString("apple") == "aelpp");
}

TEST_CASE("WordToolBox sortString char not included in the string") {
  WordToolBox wordtoolbox("apple apple");
  CHECK_THROWS(wordtoolbox.sortString(""));
}

TEST_CASE("WordToolBox isAnAnagram") {
  WordToolBox wordtoolbox("index kaszabol");
  REQUIRE(wordtoolbox.isAnAnagram("szabad lexikon"));
}

#endif

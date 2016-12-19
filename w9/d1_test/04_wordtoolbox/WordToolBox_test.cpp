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
  std::cout << "lol";
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
#endif

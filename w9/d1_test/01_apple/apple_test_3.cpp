/*
 * apple_test_3.cpp
 *
 *  Created on: 2016 dec. 19
 *      Author: win7
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "apple.h"

TEST_CASE("GIVE APPLE") {
  apple apple1;
  REQUIRE(apple1.give_an_apple() == "apple");
}

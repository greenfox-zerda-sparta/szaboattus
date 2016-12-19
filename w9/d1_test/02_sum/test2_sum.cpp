#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Sum.h"

TEST_CASE("FUNCT sum multiple ") {
  Sum sum1;
  vector <int> V = {1,2,3};
  REQUIRE(sum1.sum(V) == 6);
}

TEST_CASE("FUNCT sum empty list") {
  Sum sum1;
  vector <int> V;
  REQUIRE(sum1.sum(V) == 0);
}

TEST_CASE("FUNCT sum with one element") {
  Sum sum1;
  vector <int> V = {5};
  REQUIRE(sum1.sum(V) == 5);
}

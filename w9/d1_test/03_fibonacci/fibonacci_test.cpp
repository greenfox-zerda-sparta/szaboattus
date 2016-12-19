#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Fibonacci.h"

TEST_CASE("FIBONACCI") {
  Fibonacci fib;
  REQUIRE(fib.fib_numb(5) == 5);
}

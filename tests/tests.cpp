#include <catch2/catch_test_macros.hpp>

#include "fibonacci.hpp"
#include "problem001.hpp"
#include "problem002.hpp"

TEST_CASE("Fibonacci") {
  REQUIRE(fibonacci(0) == 0ULL);
  REQUIRE(fibonacci(1) == 1ULL);
  REQUIRE(fibonacci(2) == 1ULL);
  REQUIRE(fibonacci(3) == 2ULL);
  REQUIRE(fibonacci(10) == fibonacci(8) + fibonacci(9));
}

TEST_CASE("Problems") {
  REQUIRE(problem001(10) == 23);
  REQUIRE(problem002(89) == 44ULL);
}

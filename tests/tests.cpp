#include <catch2/catch_test_macros.hpp>

#include "fibonacci.hpp"
#include "number.hpp"
#include "problem001.hpp"
#include "problem002.hpp"

/* https://blog.wingman-sw.com/tdd-guided-by-zombies
 Z – Zero
 O – One
 M – Many (or More complex)
 B – Boundary Behaviors
 I – Interface definition
 E – Exercise Exceptional behavior
 S – Simple Scenarios, Simple Solutions
*/
TEST_CASE("Utils") {
  SECTION("fibonacci") {
    REQUIRE(fibonacci(0) == 0ULL);                           // Z
    REQUIRE(fibonacci(1) == 1ULL);                           // O
    REQUIRE(fibonacci(2) == 1ULL);                           // M
    REQUIRE(fibonacci(3) == 2ULL);                           // M
    REQUIRE(fibonacci(91) < fibonacci(92));                  // M
    REQUIRE(fibonacci(92) < fibonacci(93));                  // B
    REQUIRE(fibonacci(93) == fibonacci(91) + fibonacci(92)); // S
  }
  SECTION("isPalindrome") {
    REQUIRE(isPalindrome(0U));
    REQUIRE(isPalindrome(1U));
    REQUIRE(isPalindrome(1234554321U));
    REQUIRE_FALSE(isPalindrome(12U));
    REQUIRE_FALSE(isPalindrome(1234567890U));
  }
}

TEST_CASE("Problems") {
  REQUIRE(problem001(10) == 23);
  REQUIRE(problem002(89) == 44ULL);
}

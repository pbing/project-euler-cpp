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
    REQUIRE(fibonacci(0) == 0L);                             // Z
    REQUIRE(fibonacci(1) == 1L);                             // O
    REQUIRE(fibonacci(2) == 1L);                             // M
    REQUIRE(fibonacci(3) == 2L);                             // M
    REQUIRE(fibonacci(90) < fibonacci(91));                  // M
    REQUIRE(fibonacci(91) < fibonacci(92));                  // B
    REQUIRE(fibonacci(92) == fibonacci(90) + fibonacci(91)); // S
    REQUIRE(fibonacci(92) > 0L);
  }
  SECTION("isPalindrome") {
    REQUIRE(isPalindrome(0));
    REQUIRE(isPalindrome(1));
    REQUIRE(isPalindrome(1234554321));
    REQUIRE_FALSE(isPalindrome(12));
    REQUIRE_FALSE(isPalindrome(1234567890));
  }
}

TEST_CASE("Problems") {
  REQUIRE(problem001(10) == 23);
  REQUIRE(problem002(89) == 44L);
}

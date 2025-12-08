#include "number.hpp"

namespace {

unsigned reverseDigits(const unsigned n) {
  auto q{n};
  auto y{0U};
  do {
    auto r = q % 10U;
    q /= 10U;
    y = 10U * y + r;
  } while (q != 0U);
  return y;
}

} // namespace

bool isPalindrome(const unsigned n) { return n == reverseDigits(n); }

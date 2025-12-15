#include "number.hpp"

namespace {

int reverseDigits(const int n) {
  auto q{n};
  auto y{0};
  do {
    auto r = q % 10;
    q /= 10;
    y = 10 * y + r;
  } while (q != 0);
  return y;
}

} // namespace

bool isPalindrome(const int n) { return n == reverseDigits(n); }

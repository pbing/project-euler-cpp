#include "fibonacci.hpp"

unsigned long long fibonacci(unsigned n) {
  auto a = 0ULL;
  auto b = 1ULL;

  while (n--) {
    auto c = a + b;
    a = b;
    b = c;
  }
  return a;
}

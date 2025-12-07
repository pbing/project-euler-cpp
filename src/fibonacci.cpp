#include "fibonacci.hpp"

unsigned long long fibonacci(const int n) {
  auto a = 0ULL;
  auto b = 1ULL;

  for (auto i = 0; i < n; ++i) {
    auto c = a + b;
    a = b;
    b = c;
  }
  return a;
}

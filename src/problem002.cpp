#include "problem002.hpp"
#include "fibonacci.hpp"

unsigned long long problem002(const int n) {
  auto fib{0ULL};
  auto sum{0ULL};

  for (auto i = 0; fib < static_cast<unsigned long long>(n); ++i) {
    fib = fibonacci(i);
    if (fib % 2 == 0)
      sum += fib;
  }
  return sum;
}

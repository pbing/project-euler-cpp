#include "problem002.hpp"
#include "fibonacci.hpp"

long problem002(const int n) {
  auto fib{0L};
  auto sum{0L};

  for (auto i = 0; fib < static_cast<long>(n); ++i) {
    fib = fibonacci(i);
    if (fib % 2 == 0)
      sum += fib;
  }
  return sum;
}

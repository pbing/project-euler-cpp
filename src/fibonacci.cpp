#include "fibonacci.hpp"

long fibonacci(int n) {
  auto a = 0L;
  auto b = 1L;

  while (n--) {
    auto c = a + b;
    a = b;
    b = c;
  }
  return a;
}

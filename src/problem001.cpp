#include <numeric>

#include "problem001.hpp"

// sum(a,n) = a*n*(n+1)/2
// a=3: 3,  6, ..., 3*n
// a=5: 5, 10, ..., 5*n
unsigned sum(const unsigned a, const unsigned n) {
  auto m = (n - 1) / a;
  return (a * m * (m + 1)) / 2;
}

unsigned problem001(const unsigned n) {
  return sum(3, n) + sum(5, n) - sum(std::lcm(3, 5), n);
}

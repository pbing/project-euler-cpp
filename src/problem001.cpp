#include <numeric>

#include "problem001.hpp"

// sum(a,n) = a*n*(n+1)/2
// a=3: 3,  6, ..., 3*n
// a=5: 5, 10, ..., 5*n
int sum(const int a, const int n) {
  auto m = (n - 1) / a;
  return (a * m * (m + 1U)) / 2U;
}

int problem001(const int n) {
  return sum(3, n) + sum(5, n) - sum(std::lcm(3, 5), n);
}

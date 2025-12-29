#include "prime.hpp"

bool isPrime(unsigned n) {
  if (n < 2)
    return false;

  if (n == 2 || n == 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (unsigned i = 6; i < n / i; i += 6)
    if (n % (i - 1) == 0 || n % (i + 1) == 0)
      return false;

  return true;
}

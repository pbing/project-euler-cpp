#include <print>

#include "prime.hpp"

/*
benchmark name                       samples       iterations    est run time
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
isPrime(0x10001)                               100           211     1.6458 ms
                                        78.5358 ns    78.3267 ns    78.8301 ns
                                        1.25446 ns   0.964017 ns    1.70229 ns
*/
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

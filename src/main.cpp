#include <print>

#include "problem001.hpp"
#include "problem002.hpp"

int main() {
  std::println("problem1(1000) = {}" , problem001(1000));
  std::println("problem2(4'000'000) = {}" , problem002(4'000'000));
  return 0;
}

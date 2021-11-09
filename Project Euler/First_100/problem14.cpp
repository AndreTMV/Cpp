#include "Superlatives.h"
#include <iostream>

static const unsigned int CACHE_SIZE = 1000000;
unsigned int cache[CACHE_SIZE];

unsigned int hailstone(unsigned int number) {
  return ((number & 1) ? (3 * number + 1) : (number >> 1));
}

unsigned int CollatzChainLength(unsigned int number) {
  unsigned int counter = 1;
  while (true) {
    if (number == 1) {
      counter++;
      break;
    } else {
      if (number % 2 == 0) {
        counter++;
        number /= 2;
      } else {
        counter++;
        number = 3 * number + 1;
      }
    }
  }
  return counter;
}

unsigned long largestCollatzChain(unsigned long limit) {
  unsigned int largestChain = 0, tempChain = 0, targetNumber = 0;
  for (unsigned int number = 1; number <= limit; number++) {
    tempChain = CollatzChainLength(number);
    if (tempChain > largestChain) {
      largestChain = tempChain;
      targetNumber = number;
    }
  }
  return targetNumber;
}

unsigned long findDepth(unsigned long number) {
  unsigned int d;
  if (number == 1)
    return 0;
  if (number < CACHE_SIZE && cache[number]) {
    return cache[number];
  }
  d = findDepth(hailstone(number)) + 1;
  if (number < CACHE_SIZE) {
    cache[number] = d;
  }
  return d;
}

int main() {
  static const unsigned int N = 1000000;
  Superlatives<unsigned int, unsigned int> super;
  unsigned int i, n, d;

  for (i = 2; i < N; ++i) {
    /* d = 0; */
    /* for (n = i; n > 1; n = hailstone(n)) { */
    /*   ++d; */
    /* } */
    super.AddSate(i, findDepth(i));
  }
  std::cout << super.MaxState() << " has a chain of length " << super.MaxVal()
            << std::endl;
  return 0;
}

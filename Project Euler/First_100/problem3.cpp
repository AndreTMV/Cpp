#include <cmath>
#include <iostream>

int largestPrimeFactor(long number) {
  unsigned long largestPrimeFactor = 0, decomposer = 2;
  largestPrimeFactor = decomposer;
  while (decomposer <= number) {
    if (number == 1 || number == 0) {
      break;
    } else if (number % decomposer == 0) {
      number = number / decomposer;
    } else
      decomposer++;
  }
  largestPrimeFactor = decomposer;
  return largestPrimeFactor;
}

int largestPrimeFactor(void) {
  long number = 600851475143, lastFactor = 0;
  if ((number % 2) == 0) {
    lastFactor = 2;
    number /= 2;
    while ((number % 2) == 0) {
      number /= 2;
    }
  } else {
    lastFactor = 1;
  };
  int factor = 3, maxFactor = sqrt(number);
  while ((number > 1) && (factor <= maxFactor)) {
    if ((number % factor) == 0) {
      number /= factor;
      lastFactor = factor;
      while ((number % factor) == 0) {
        number /= factor;
      }
      maxFactor = sqrt(number);
    }
    factor += 2;
  }
  if (number == 1) {
    return lastFactor;
  } else {
    return number;
  }
}

int main() {

  std::cout << largestPrimeFactor() << std::endl;
  return 0;
}

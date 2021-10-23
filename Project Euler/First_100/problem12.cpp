#include <cmath>
#include <iostream>

int factors(unsigned int number) {
  int factors = 0;
  for (unsigned int i = 1; i < ceil(sqrt(number)); ++i) {
    if (number % i == 0)
      factors += 2;
  }
  return factors;
}

int divisibleTriangular(const unsigned int limit) {
  unsigned int biggestTriangular = 3, posicion = 2;
  while (factors(biggestTriangular) <= limit) {
    posicion++;
    biggestTriangular = (posicion * (posicion + 1)) / 2;
  }
  return biggestTriangular;
}

int refactored(unsigned int number) {
  unsigned int div = 2, exp, count = 1;
  while (number > 1) {
    exp = 0;
    while (number % div == 0) {
      number /= div;
      ++exp;
    }
    count *= (exp + 1);
    div++;
  }
  return count;
}

int main() {
  const unsigned int targetDivisors = 500;
  unsigned int position, triangle, numDivisors, leftDivisors = 1, rightDivisors;
  for (position = 1;; ++position) {
    triangle = position * (position + 1) / 2; // before another optimization
    // if it's odd
    if ((position + 1) & 1) {
      rightDivisors = refactored(position + 1);
    } else {
      rightDivisors = refactored((position + 1) / 2);
    }
    numDivisors = leftDivisors * rightDivisors;
    if (numDivisors > targetDivisors) {
      std::cout << "Triangle(" << position << ") = " << triangle << ", has "
                << numDivisors << " divisors" << std::endl;
      return 0;
    }
    leftDivisors = rightDivisors;
  }
  return 0;
}

#include <cmath>
#include <iostream>
using std::cout, std::cin, std::endl;

bool isPrime(long number) {
  if (number == 1)
    return false;
  else if (number < 4)
    return true;
  else if ((number % 2) == 0)
    return false;
  else if (number < 9)
    return true;
  else if ((number % 3) == 0)
    return false;
  else {
    int limit = floor(sqrt(number));
    int factor = 5;
    while (factor <= limit) {
      if (number % factor == 0) {
        return false;
      }
      if (number % (factor + 2) == 0) {
        return false;
      }
      factor += 6;
    }
  }
  return true;
}

long sumOfPrimes(const unsigned long limit) {
  unsigned int count = 0;
  unsigned long number = 0, totalSum = 0;
  while (number < limit) {
    number++;
    if (isPrime(number)) {
      totalSum += number;
    }
  }
  return totalSum;
}

int main() { cout << sumOfPrimes(2000000) << endl; }

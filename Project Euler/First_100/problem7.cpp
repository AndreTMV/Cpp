#include <cmath>
#include <iostream>
using std::cout, std::cin, std::endl;

bool isPrime(int number) {
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

void theXPrimeNumber(int limit) {
  unsigned long count = 1, candidate = 1;
  while (count < limit) {
    candidate += 2;
    if (isPrime(candidate)) {
      count++;
    }
  }
  std::cout << candidate << std::endl;
}

int main() {
  theXPrimeNumber(10001);
  return 0;
}

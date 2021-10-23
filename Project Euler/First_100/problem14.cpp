#include <iostream>

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

/* unsigned long */

/* unsigned long findDepth(unsigned long number) { */
/*   if (number == 1) */
/*     return 0; */
/*   return */
/* } */

int main() {
  std::cout << "Largest number: " << largestCollatzChain(1000000) << std::endl;
  return 0;
}

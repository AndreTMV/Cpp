#include <iostream>

int smallestNumberDivisbleBy1ToX(int number) {
  unsigned long smallestNumber = 1;
  for (int dividend = 1; dividend < number; ++dividend) {
    if (smallestNumber % dividend == 0)
      ; // pass
    else {
      smallestNumber++;
      dividend = 1;
    }
  }
  return smallestNumber;
}

int main() {
  std::cout << smallestNumberDivisbleBy1ToX(20) << std::endl;
  return 0;
}

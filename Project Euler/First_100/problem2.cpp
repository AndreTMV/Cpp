#include <iostream>

int fibonacci(int limite) {
  unsigned int totalSum = 0, first = 1, second = 1, third = first + second;
  while (third < limite) {
    totalSum += third;
    first = second + third;
    second = third + first;
    third = second + first;
  }
  return totalSum;
}

int main() {

  std::cout << fibonacci(4000000) << std::endl;
  return 0;
}

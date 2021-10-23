#include <iostream>

int sumOf3And5(int limite) {
  unsigned int totalSum = 0;
  for (int i = 0; i < limite; i++) {
    // si es divisble entre 3 y 5 suma el numero
    if (i % 3 == 0 || i % 5 == 0) {
      totalSum += i;
    }
  }
  return totalSum;
}

int sumOf3And5(long target, int number) {
  int p = target / number;
  return number * (p * (p + 1)) / 2;
}

int main() {

  std::cout << sumOf3And5(1000) << std::endl;
  std::cout << sumOf3And5(999, 3) + sumOf3And5(999, 5) - sumOf3And5(999, 15)
            << std::endl;
  return 0;
}

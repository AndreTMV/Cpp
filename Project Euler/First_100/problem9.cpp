#include <chrono>
#include <cmath>
#include <iostream>

int gcd(int number1, int number2) {
  if (number1 == 0)
    return number2;
  return gcd(number2 % number1, number1);
}
long pythagoric(unsigned int expectedAnswer) {
  for (int firstNumber = 1; firstNumber < expectedAnswer; ++firstNumber) {
    for (int secondNumber = 1; secondNumber < expectedAnswer; ++secondNumber) {
      for (int thirdNumber = 1; thirdNumber < expectedAnswer; ++thirdNumber) {
        if (((firstNumber * firstNumber) + (secondNumber * secondNumber)) ==
            (thirdNumber * thirdNumber)) {
          if ((firstNumber + secondNumber + thirdNumber) == expectedAnswer)
            return (firstNumber * secondNumber * thirdNumber);
        }
      }
    }
  }
}

long pythagoric(void) {
  unsigned int d = 0, n = 0, a = 0, b = 0, c = 0, expectedAnswer = 1000000,
               answer = expectedAnswer, factor = 0, reduced = 0,
               limit = ceil(sqrt(expectedAnswer)) - 1;
  ;
  expectedAnswer /= 2;
  for (int number = 2; number < limit; ++number) {
    if (expectedAnswer % number == 0) {
      reduced = expectedAnswer / 2;
      while (reduced % 2 == 0) {
        reduced /= 2;
      }
      if (number % 2 == 1) {
        factor = number + 2;
      } else {
        factor = number + 1;
      }
      while ((factor < (2 * number)) && (factor <= limit)) {
        if ((reduced % factor == 0) && (gcd(factor, number) == 1)) {
          d = expectedAnswer / (factor * number);
          n = factor - number;
          a = d * (number * number - n * n);
          b = 2 * d * number * n;
          c = d * (number * number + n * n);
          if ((a + b + c) == answer) {
            return a * b * c;
          }
        }
        factor += 2;
      }
    }
  }
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  std::cout << pythagoric(1000) << std::endl;
  /* std::cout << pythagoric() << std::endl; */
  auto finish = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = finish - start;
  std::cout << "Time: " << elapsed.count() << std::endl;
  return 0;
}

#include <iostream>

int reverse(long number) {
  unsigned long reversedNumber = 0;
  while (number > 0) {
    reversedNumber = (reversedNumber * 10) + (number % 10);
    number /= 10;
  }
  return reversedNumber;
}

int reverse(long factor1, long factor2) {
  unsigned long number = factor1 * factor2;
  unsigned long reversedNumber = 0;
  while (number > 0) {
    reversedNumber = (reversedNumber * 10) + (number % 10);
    number /= 10;
  }
  return reversedNumber;
}

bool isPalindrome(int factor1, int factor2) {
  return (factor1 * factor2 == reverse(factor1, factor2)) ? true : false;
}

int largestPalindromeOf3Digits(int limit) {
  unsigned long largestPalidrome = 0;
  for (int number1 = limit; number1 > 0; --number1) {
    for (int number2 = number1; number2 > 0; --number2) {
      if ((number1 * number2) <= largestPalidrome)
        break;
      if (isPalindrome(number1, number2)) {
        largestPalidrome = number1 * number2;
      }
    }
  }
  return largestPalidrome;
}

int largestPalindromeOf3Digits(void) {
  unsigned long largestPalidrome = 0, testNumber = 0, temporalNumber = 0;
  for (int firstNumber = 0; firstNumber < 1000; ++firstNumber) {
    for (int secondNumber = 0; secondNumber < 1000; ++secondNumber) {
      testNumber = firstNumber * secondNumber;
      temporalNumber = reverse(testNumber);
      if (testNumber == temporalNumber) {
        largestPalidrome = (temporalNumber > largestPalidrome)
                               ? temporalNumber
                               : largestPalidrome;
      }
    }
  }
  return largestPalidrome;
}

int main() {
  std::cout << largestPalindromeOf3Digits() << std::endl;
  std::cout << largestPalindromeOf3Digits(1000) << std::endl;
  return 0;
}

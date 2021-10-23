#include <iostream>

/* int differenceOfSumAndSquared(int limit) { */
/*   unsigned int sumOfSquares = 0, squareOfSums = 0; */
/*   for (int number = 0; number <= limit; ++number) { */
/*     sumOfSquares += number * number; */
/*     squareOfSums += number; */
/*   } */
/*   squareOfSums *= squareOfSums; */
/*   return squareOfSums - sumOfSquares; */
/* } */

int sumOfSquares(int limit) {
  return ((2 * limit + 1) * (limit + 1)) * (limit / 6.0);
}

int squareOfSums(int limit) {
  unsigned int totalSum = (limit * (limit + 1)) / 2;
  std::cout << "Sum of: " << totalSum << std::endl;
  return totalSum * totalSum;
}

int main() {
  /* std::cout << differenceOfSumAndSquared(101)<< std::endl; */
  std::cout << squareOfSums(100) - sumOfSquares(100) << std::endl;
  return 0;
}

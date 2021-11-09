#include <cmath>
#include <iostream>
const unsigned int NUM_COLS = 21;
const unsigned int NUM_ROW = NUM_COLS;
unsigned long cache[NUM_ROW][NUM_COLS];

unsigned long factorial(unsigned long number) {
  if (number == 0 || number == 1) {
    return 1;
  }
  return number * (factorial(number - 1));
}

unsigned long countRoutes(unsigned int row, unsigned int column) {
  unsigned long north = 0, west = 0, total;
  if (row == 0 && column == 0) {
    return 1;
  }

  if (cache[row][column]) {
    return cache[row][column];
  }

  if (row) {
    north = countRoutes(row - 1, column);
  }

  if (column) {
    west = countRoutes(row, column - 1);
  }

  cache[row][column] = total = north + west;
  return total;
}

unsigned long countRoutesOn(unsigned long gridSize) {
  unsigned long result = 1;
  for (unsigned int i = 0; i < gridSize; ++i) {
    result *= (2 * gridSize) - i;
    result /= i + 1;
  }
  return result;
}

int main() {
  // Dynamic Programming
  unsigned int row, column;
  cache[0][0] = 1;
  for (column = 1; column < NUM_COLS; ++column) {
    cache[0][column] = cache[0][column - 1];
  }
  for (row = 1; row < NUM_ROW; ++row) {
    cache[row][0] = cache[row - 1][0];
    for (column = 1; column < NUM_COLS; ++column) {
      cache[row][column] = cache[row - 1][column] + cache[row][column - 1];
    }
  }
  std::cout << (NUM_COLS - 1) << " x " << (NUM_COLS - 1) << " grid has "
            << cache[NUM_ROW - 1][NUM_COLS - 1] << std::endl;
  std::cout << "O(n) solution: " << countRoutesOn(20) << std::endl;
  return 0;
}

#include "problem13.h"
#include <fstream>
#include <iostream>

void sumOfNumbers() {
  uint64_t sum = 0;
  for (uint64_t x : arreglo) {
    sum += x;
  }
  printf("sum = %lu\n", sum);
}

int main() {
  sumOfNumbers();
  return 0;
}

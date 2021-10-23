#include <cmath>
#include <iostream>

int binario(int number) {
  if (number < 2)
    return number;
  else {
    return (number % 2) + (10 * binario(number / 2));
  }
}

int decimal(int number) {
  int decimalNumber = 0, exponent = 0;
  while (number != 0) {
    if (number % 10 == 1) {
      decimalNumber += pow(2, exponent);
    }
    exponent++;
    number /= 10;
  }
  return decimalNumber;
}

int decimalRecursivo(int numero) {
  if (numero == 0 || numero == 1)
    return numero;
  else
    return decimalRecursivo(numero / 10) * 2 + numero % 10;
}

int main() {
  std::cout << decimalRecursivo(110) << std::endl;
  return 0;
}

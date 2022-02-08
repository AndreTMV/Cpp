#include <cmath>
#include <iostream>
using std::endl, std::cout, std::cin, std::pow;

unsigned int sumaFila(const unsigned int fila) { return pow(2, fila); }

unsigned int sumaFilas(const unsigned int fila1, const unsigned int fila2) {
  unsigned int sumaTotal = 0;
  for (size_t index = fila1; index <= fila2; ++index) {
    sumaTotal += sumaFila(index);
  }
  return sumaTotal;
}

int main() {
  unsigned int numeroEntradas = 0, fila1 = 0, fila2 = 0;
  cin >> numeroEntradas;
  for (size_t index = 0; index < numeroEntradas; ++index) {
    cin >> fila1 >> fila2;
    cout << sumaFilas(fila1, fila2) << endl;
  }
  return 0;
}

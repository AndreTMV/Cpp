#include <algorithm>
#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector, std::max;
void llenarVector(vector<int> &arr) {
  for (size_t index = 0; index < arr.size(); ++index) {
    cin >> arr[index];
  }
}

int suma(vector<int> arr) {
  int maxSuma = arr[0];
  int suma = maxSuma;
  for (size_t index = 1; index < arr.size(); ++index) {
    suma = max(arr[index] + suma, arr[index]);
    maxSuma = max(suma, maxSuma);
  }
  return maxSuma;
}

int main() {
  unsigned int cajas = 0;
  cin >> cajas;
  vector<int> arreglo(cajas);
  llenarVector(arreglo);
  cout << suma(arreglo) << endl;
  return 0;
}

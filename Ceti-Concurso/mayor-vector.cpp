#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector;

void imprimeVector(vector<int> arreglo) {
  for (auto elemento : arreglo) {
    cout << elemento << " ";
  }
  cout << endl;
}

void llenarArreglos(vector<int> &arreglo) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    cin >> arreglo[index];
  }
}

unsigned short int mayor(vector<int> arreglo, vector<int> arreglo1) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    if (!(arreglo[index] > arreglo1[index]))
      return 0;
  }
  return 1;
}

int main() {
  unsigned int N = 0;
  cin >> N;
  vector<int> arr1(N), arr2(N);
  llenarArreglos(arr1);
  llenarArreglos(arr2);
  cout << mayor(arr1, arr2);
  return 0;
}

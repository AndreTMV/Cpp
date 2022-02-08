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

unsigned int producto(vector<int> arr1, vector<int> arr2) {
  unsigned int sumaProducto = 0;
  for (size_t index = 0; index < arr1.size(); ++index) {
    sumaProducto += (arr1[index] * arr2[index]);
  }
  return sumaProducto;
}

int main() {
  unsigned int N = 0;
  cin >> N;
  vector<int> arr1(N), arr2(N);
  llenarArreglos(arr1);
  llenarArreglos(arr2);
  cout << producto(arr1, arr2);
}

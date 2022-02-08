#include <iostream>
#include <vector>
using std::cin, std::cout, std::endl, std::vector;

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

void remplazaX(vector<int> arreglo, unsigned short int K) {
  for (auto elemento : arreglo) {
    if (elemento % K == 0)
      cout << elemento << " ";
    else
      cout << "X ";
  }
}

int main() {
  unsigned short int N = 0, K = 0;
  cin >> N;
  vector<int> arreglo(N);
  llenarArreglos(arreglo);
  cin >> K;
  remplazaX(arreglo, K);
  return 0;
}

#include <iostream>
#include <vector>
using std::cout, std::cin, std::endl, std::vector, std::max;

void llenarVector(vector<vector<int>> &arreglo, unsigned int N) {
  unsigned int elemento = 0;
  for (size_t row = 1; row <= N; ++row) {
    for (size_t col = 1; col <= row; ++col) {
      cin >> elemento;
      if (elemento % 2 == 0)
        arreglo[row][col] = 1;
    }
  }
}

unsigned int mejorCamino(vector<vector<int>> arreglo, unsigned int N) {
  unsigned int camino = 0;
  /* size_t row = 0, columna = 0; */
  for (size_t row = N - 1; row >= 1; --row) {
    for (size_t columna = 0; columna <= row; ++columna) {
      camino = max(arreglo[row + 1][columna], arreglo[row + 1][columna + 1]);
      arreglo[row][columna] += camino;
    }
  }
  return arreglo[1][1];
}

int main() {
  vector<vector<int>> arreglo(101, vector<int>(101, 0));
  unsigned int N = 0;
  cin >> N;
  llenarVector(arreglo, N);
  cout << mejorCamino(arreglo, N);
}

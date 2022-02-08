#include <bits/stdc++.h>
using std::cout, std::cin, std::endl, std::vector, std::max_element,
    std::min_element;

void imprimeVector(vector<unsigned int> arreglo) {
  for (auto elemento : arreglo) {
    cout << elemento << " ";
  }
  cout << endl;
}

void llenarArreglos(vector<unsigned int> arreglo) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    cin >> arreglo[index];
  }
}

void minimoMaximo(vector<unsigned int> arreglo, unsigned int j,
                  unsigned int i) {
  cout << "En min\n";
  unsigned int mayor = *max_element(arreglo.begin() + j, arreglo.begin() + i);
  unsigned int menor = *min_element(arreglo.begin() + j, arreglo.begin() + i);
  cout << "mayor: " << menor << " menor: " << mayor << endl;
}

void cambiaCaracter(vector<unsigned int> &arreglo, unsigned int i,
                    unsigned int v) {
  arreglo[i] = v;
}

int main() {
  char opcion;
  unsigned int N = 0, M = 0, i = 0, j = 0, v = 0;
  cin >> N >> M;
  vector<unsigned int> arr(N);
  llenarArreglos(arr);
  for (int index = 0; index < M; ++index) {
    cin >> opcion;
    switch (opcion) {
    case 'C': {
      cin >> i >> j;
      minimoMaximo(arr, j - 1, i - 1);
      break;
    }
    case 'A': {
      cin >> i >> v;
      cambiaCaracter(arr, i - 1, v);
      break;
    }
    default: {
      break;
    }
    }
  }
  return 0;
}

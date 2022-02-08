#include <bits/stdc++.h>
using namespace std;

void llenarArreglos(vector<unsigned short int> &arreglo) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    cin >> arreglo[index];
  }
}

int main() {
  unsigned short int M = 0, N = 0;
  cin >> M >> N;
  // creamos un mapa que guardara la frecuencia de los valores
  map<unsigned short int, unsigned short int> total;
  vector<unsigned short int> cubetas(M);
  // llenamos el vector
  llenarArreglos(cubetas);
  for (size_t element = 1; element <= N; ++element) {
    total.insert(make_pair(element, 0));
  }
  for (const auto &element : cubetas) {
    // checamos si existe el elemento en el mapa
    map<unsigned short int, unsigned short int>::iterator it =
        total.find(element);
    // si existe incrementamos la frecuencia
    if (it != total.end()) {
      it->second++;
      // si no creamos un nuevo key y inicializamos el valor en 1
    }
    /* else { */
    /*   total.insert(make_pair(element, 1)); */
    /* } */
  }
  // Imprimimos el resultado esperado
  for (auto &element : total) {
    std::cout << element.first << ": " << element.second << std::endl;
  }
  return 0;
}

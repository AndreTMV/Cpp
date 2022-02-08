#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  map<int, int> edades;
  cin >> N;
  vector<int> alumnos(N);
  for (int i = 0; i < N; ++i) {
    cin >> alumnos[i];
  }
  for (const auto &element : alumnos) {
    // checamos si existe el elemento en el mapa
    map<int, int>::iterator it = edades.find(element);
    // si existe incrementamos la frecuencia
    if (it != edades.end()) {
      it->second++;
      // si no creamos un nuevo key y inicializamos el valor en 1
    } else {
      edades.insert(make_pair(element, 1));
    }
  }
  for (auto &element : edades) {
    std::cout << element.first << " " << element.second << std::endl;
  }
  return 0;
}

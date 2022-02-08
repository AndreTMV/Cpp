#include <bits/stdc++.h>
using std::cout, std::cin, std::vector, std::map;

void llenarArreglos(vector<unsigned short int> &arreglo) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    cin >> arreglo[index];
  }
}

void frecuencia(vector<unsigned short int> &arreglo) {
  map<unsigned short int, unsigned short int> freq;
  for (size_t index = 0; index < arreglo.size(); ++index) {
    if (freq.find(arreglo[index]) == freq.end()) {
      freq[arreglo[index]] = 1;
    } else {
      freq[arreglo[index]]++;
    }
  }
  arreglo.clear();
  for (auto &it : freq) {
    arreglo.push_back(it.second);
  }
}

int main() {
  unsigned short int n = 0;
  cin >> n;
  vector<unsigned short int> arreglo(n);
  llenarArreglos(arreglo);
  frecuencia(arreglo);
  while (true) {
    bool iguales =
        std::adjacent_find(arreglo.begin(), arreglo.end(),
                           std::not_equal_to<unsigned short int>()) ==
        arreglo.end();
    unsigned short int bolsas = arreglo.size();
    if (bolsas <= 2) {
      if (iguales) {
        cout << 1;
        break;
      } else {
        cout << bolsas;
        break;
      }
    } else {
      frecuencia(arreglo);
    }
  }
  return 0;
}

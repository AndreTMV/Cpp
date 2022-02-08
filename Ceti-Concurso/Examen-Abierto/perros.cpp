#include <bits/stdc++.h>
using std::cin, std::cout, std::endl, std::vector;

void llenarArreglos(vector<unsigned short int> &arreglo) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    cin >> arreglo[index];
  }
}
int main() {
  unsigned short int N = 0, caricias = 0;
  cin >> N;
  vector<unsigned short int> perros(N);
  llenarArreglos(perros);
  while (true) {
    auto min = std::min_element(perros.begin(), perros.end());
    if (*min == 0) {
      cout << caricias;
      return 0;
    } else {
      caricias++;
      auto minIndex =
          std::min_element(perros.begin(), perros.end()) - perros.begin();
      std::for_each(perros.begin(), perros.end(),
                    [](unsigned short int &n) { n--; });
      perros[minIndex]++;
    }
  }
}

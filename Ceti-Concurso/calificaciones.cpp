#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  vector<int> alumnos;
  /* vector<int> respuestas; */
  for (int count = 0; count < N; ++count) {
    string opcion;
    cin >> opcion;
    if (opcion[0] == 'R') {
      int dato = 0;
      cin >> dato;
      alumnos.push_back(dato);
    } else if (opcion[0] == 'C') {
      int dato = 0, i = 0, j = 0, cuenta = 0;
      cin >> dato >> i >> j;
      i--;
      j--;
      for (; i <= j; ++i) {
        if (alumnos[i] == dato) {
          cuenta++;
        }
      }
      cout << cuenta << "\n";
      /* respuestas.push_back(cuenta); */
    }
  }
  /* for (auto &i : respuestas) { */
  /*   cout << i << "\n"; */
  /* } */
}

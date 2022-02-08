#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  stack<int> pila;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    string opcion;
    cin >> opcion;
    if (opcion.compare("AGREGA") == 0) {
      int numero = 0;
      cin >> numero;
      pila.push(numero);
    } else if (opcion.compare("CONSUME") == 0) {
      int numero1 = 0, numero2 = 0;
      numero1 = pila.top();
      pila.pop();
      numero2 = pila.top();
      pila.pop();
      pila.push(numero1 + numero2);
    } else if (opcion.compare("IMPRIME") == 0) {
      cout << pila.top() << "\n";
    }
  }
  return 0;
}

#include <bits/stdc++.h>
using std::cout, std::cin, std::endl, std::string;
bool esParBlanco(char casilla) {
  switch (casilla) {
  case 'a':
    return true;
    break;
  case 'b':
    return false;
    break;
  case 'c':
    return true;
    break;
  case 'd':
    return false;
    break;
  case 'e':
    return true;
    break;
  case 'f':
    return false;
    break;
  case 'g':
    return true;
    break;
  case 'h':
    return false;
    break;
  }
}

string blancoNegro(bool par, int casilla) {
  if (par) {
    return (casilla % 2 == 0) ? "BLANCO" : "NEGRO";
  } else {
    return (casilla % 2 != 0) ? "BLANCO" : "NEGRO";
  }
}
int main() {
  int numero = 0;
  char casilla;
  cin >> casilla;
  cin >> numero;
  cout << blancoNegro(esParBlanco(casilla), numero) << endl;
  return 0;
}

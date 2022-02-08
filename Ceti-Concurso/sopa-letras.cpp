#include <algorithm>
#include <iostream>
using std::cout, std::cin, std::endl, std::string, std::count;

string nombre = "miguel";

void cuantasVecesLetras(string sopaLetras, unsigned short int &m,
                        unsigned short int &i, unsigned short int &g,
                        unsigned short int &u, unsigned short int &e,
                        unsigned short int &l) {
  for (int index = 0; index < sopaLetras.size(); index++) {
    if (nombre.find(sopaLetras[index]) != string::npos) {
      char posicion = sopaLetras[index];
      switch (posicion) {
      case 'm':
        m++;
        break;
      case 'i':
        i++;
        break;
      case 'g':
        g++;
        break;
      case 'u':
        u++;
        break;
      case 'e':
        e++;
        break;
      case 'l':
        l++;
        break;
      }
    }
  }
}
unsigned int cuantasVeces(unsigned short int m, unsigned short int i,
                          unsigned short int g, unsigned short int u,
                          unsigned short int e, unsigned short int l) {
  unsigned short int menor = m;
  if (i < menor)
    menor = i;
  if (g < menor)
    menor = g;
  if (u < menor)
    menor = u;
  if (e < menor)
    menor = e;
  if (l < menor)
    menor = l;
  return menor;
}
int main() {
  string sopaLetras;
  unsigned short int m = 0, i = 0, g = 0, u = 0, e = 0, l = 0;
  cin >> sopaLetras;
  cuantasVecesLetras(sopaLetras, m, i, g, u, e, l);
  cout << cuantasVeces(m, i, g, u, e, l) << endl;
  return 0;
}

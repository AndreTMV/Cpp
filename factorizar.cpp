#include <cmath>
#include <iostream>

void factorizaTrinomioCuadradoPerfecto() {
  int a, b, c = 0;
  std::cout << "Ingrese un trinomio cuadrado perfecto (ax² +/- bx + c)"
            << std::endl;
  std::cout << "a:";
  std::cin >> a;
  std::cout << "b:";
  std::cin >> b;
  std::cout << "c:";
  std::cin >> c;
  if (b < 0) {
    if (2 * (sqrt(a) * sqrt(c)) == abs(b)) {
      a = sqrt(a);
      c = sqrt(c);
      printf("(%dx - %d)²\n", a, c);
    } else {
      std::cout << "No es un trinomio cuadrado perfecto" << std::endl;
    }
  } else {

    if (2 * (sqrt(a) * sqrt(c)) == b) {
      a = sqrt(a);
      c = sqrt(c);
      printf("(%dx + %d)²\n", a, c);
    } else {
      std::cout << "No es un trinomio cuadrado perfecto" << std::endl;
    }
  }
}

int main() { factorizaTrinomioCuadradoPerfecto(); }

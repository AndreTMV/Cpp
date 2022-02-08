#include <iostream>
using std::cin, std::cout;
int main() {
  unsigned int N = 0, cuenta = 1, maximo = 1;
  cin >> N;
  char liston[N];
  cin >> liston;
  char anterior = liston[0], maxC = liston[0];
  for (size_t i = 1; i < N; ++i) {
    if (liston[i] == anterior) {
      cuenta++;
      if (maximo < cuenta) {
        maximo = cuenta;
        maxC = liston[i];
      } else {
        maximo = maximo;
      }
    } else {
      cuenta = 1;
      anterior = liston[i];
    }
  }
  cout << maxC << " " << maximo;
}

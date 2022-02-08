#include <bits/stdc++.h>
using namespace std;

void llenarArreglo(vector<int> &arr) {
  for (auto &i : arr) {
    cin >> i;
  }
}

int largestPrimeFactor(long number) {
  long lastFactor = 0, contador = 1;
  if (number == 1) {
    return contador;
  }
  if ((number % 2) == 0) {
    lastFactor = 2;
    number /= 2;
    contador++;
    while ((number % 2) == 0) {
      number /= 2;
    }
  } else {
    lastFactor = 1;
    contador++;
  };
  int factor = 3, maxFactor = sqrt(number);
  while ((number > 1) && (factor <= maxFactor)) {
    if ((number % factor) == 0) {
      number /= factor;
      contador++;
      lastFactor = factor;
      while ((number % factor) == 0) {
        number /= factor;
      }
      maxFactor = sqrt(number);
    }
    factor += 2;
  }
  return contador;
}

int main() {
  int N = 0;
  cin >> N;
  vector<int> arr(N);
  llenarArreglo(arr);
  cout << largestPrimeFactor(1);
  return 0;
}

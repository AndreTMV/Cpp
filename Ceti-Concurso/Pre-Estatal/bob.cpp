#include <iostream>
using namespace std;

void llenarMural(char **mural, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> mural[i][j];
    }
  }
}
void imprimirMural(char **mural, int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << mural[i][j];
    }
    cout << "\n";
  }
}

int main() {
  int N = 0, area = 0, total = 0, minimo_i = 0, maximo_i = 0, vacios = 0,
      maximo_j = 0, minimo_j = 0;
  cin >> N;
  char **mural = new char *[N];
  for (int index = 0; index < N; ++index) {
    mural[index] = new char[N];
  }
  llenarMural(mural, N);
  for (int index = 0; index < N; ++index) {
    for (int jndex = 0; jndex < N; ++jndex) {
      if (mural[index][jndex] == '.') {
        minimo_j = min(minimo_j, jndex);
        maximo_j = max(maximo_j, jndex);
        minimo_i = min(minimo_i, index);
        maximo_i = max(maximo_i, index);
        vacios++;
      }
    }
  }

  int horizontal = maximo_j - minimo_j;
  int vertical = maximo_i - minimo_i;
  if (horizontal == 1 or vertical == 1)
    area = 1;
  else {
    if (horizontal != vertical) {
      if (horizontal > vertical) {
        vertical++;
      } else {
        horizontal++;
      }
    }
  }

  area = horizontal * vertical;
  total = area - vacios;
  cout << area << " " << total << "\n";
  imprimirMural(mural, N);
  for (int index = 0; index < N; ++index) {
    delete[] mural[index];
  }
  delete[] mural;
  return 0;
}

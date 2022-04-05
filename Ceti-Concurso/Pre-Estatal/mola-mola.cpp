#include <bits/stdc++.h>
using namespace std;
struct pez {
  int x, y;
  bool vivo;
  pez(int x, int y) : x(x), y(y), vivo(true){};
  bool operator>(const pez &b) {
    return (this->x > b.x and this->y > b.y) ? true : false;
  }
  bool operator<(const pez &b) {
    return (this->x < b.x and this->y < b.y) ? true : false;
  }
};

vector<pez> muertos(vector<pez> peceses) {
  vector<pez> nuevos;
  for (auto &i : peceses) {
    if (i.vivo)
      nuevos.push_back(i);
  }
  return nuevos;
}

int main() {
  int N = 0;
  cin >> N;
  vector<pez> pecera;
  for (int i = 0; i < N; ++i) {
    int x, y;
    cin >> x >> y;
    if (i == 0) {
      pecera.push_back({x, y});
      continue;
    }
    pez a(x, y);
    for (auto &i : pecera) {
      if (a > i)
        i.vivo = false;
      else if (a < i) {
        a.vivo = false;
        break;
      }
    }
    if (a.vivo)
      pecera.push_back(a);
    pecera = muertos(pecera);
  }
  cout << pecera.size();
  return 0;
}

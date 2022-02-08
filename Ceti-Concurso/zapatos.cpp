#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  vector<int> zapatos(N);
  vector<int> quedantes;
  for (auto &i : zapatos) {
    cin >> i;
  }
  sort(zapatos.begin(), zapatos.end());
  for (auto i : zapatos) {
    cout << i << " ";
  }
  cout << "\n";
  size_t size = zapatos.size();
  for (size_t i = 0; i < size; ++i) {
    if (zapatos[i] == zapatos[i + 1]) {
      i++;
    } else {
      quedantes.push_back(zapatos[i]);
    }
  }
  if (quedantes.size() == 0) {
    cout << ":D\n" << 0 << "\n" << N;
  } else {
    for (auto i : quedantes) {
      cout << i << " ";
    }
    cout << "\n"
         << quedantes.size() << "\n"
         << zapatos.size() - quedantes.size();
  }
  return 0;
}

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N = 0, K = 0, parcial = 0, total = 0;
  cin >> N >> K;
  vector<int> posciones(N);
  sort(posciones.begin(), posciones.end());
  for (int i = 0; i < N; ++i) {
    cin >> posciones[i];
  }
  for (int i = 0; i < N; ++i) {
    parcial += posciones[i];
    if (parcial <= K) {
      total++;
    }
  }
  cout << total;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N = 0;
  cin >> N;
  vector<string> nombres(N);
  for (auto &i : nombres) {
    cin >> i;
  }
  sort(nombres.begin(), nombres.end());
  for (auto i : nombres) {
    cout << i << "\n";
  }
  return 0;
}

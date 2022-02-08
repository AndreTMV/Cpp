#include <bits/stdc++.h>
using std::cin, std::cout, std::endl;
int main() {
  unsigned short int T = 13000, M = 0;
  cin >> M;
  for (size_t index = 0; index < M; ++index) {
    unsigned short int compra = 0;
    cin >> compra;
    T -= compra;
  }
  cout << T << "\n";
  return 0;
}

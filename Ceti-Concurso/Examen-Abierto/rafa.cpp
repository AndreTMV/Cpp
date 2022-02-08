#include <iostream>
using std::cin, std::cout;
int main() {
  long long A = 0, B = 0, C = 0, m = 1000000007;
  cin >> A >> B >> C;
  cout << (A * B * C) % m;
}

#include <iostream>
using std::cout, std::endl, std::cin;
int main() {
  unsigned int N = 0;
  cin >> N;
  if (N != 0) {
    cout << N << " " << 1;
  } else {
    cout << -1;
  }
  return 0;
}

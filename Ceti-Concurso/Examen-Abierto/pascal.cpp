#include <iostream>
using std::cout, std::cin, std::endl;

int main() {
  unsigned short int N = 0, P = 1, numeroB = 0, numeroG = 0;
  cin >> N;
  while (P <= N) {
    numeroB = N - P;
    numeroG = P;
    for (size_t j = 0; j < numeroB / 2; ++j) {
      cout << ".";
    }
    for (size_t i = 0; i < numeroG; ++i) {
      cout << "#";
    }
    for (size_t j = 0; j < numeroB / 2; ++j) {
      cout << ".";
    }
    cout << endl;
    P += 2;
  }
  return 0;
}

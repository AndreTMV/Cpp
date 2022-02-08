#include <cmath>
#include <iomanip>
#include <iostream>
using std::cin, std::cout, std::endl, std::sqrt, std::pow, std::setprecision,
    std::fixed;

int main() {
  int N = 0, x = 0, y = 0, x1 = 0, y1 = 0;
  long double total = 0.0;
  cin >> N;
  cin >> x >> y;
  for (size_t i = 0; i < N - 1; ++i) {
    cin >> x1 >> y1;
    total += sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
    x = x1;
    y = y1;
  }
  cout << fixed << setprecision(10) << total;
}

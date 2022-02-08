#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double evaluaFormula(double x, double y, double z) {
  double total = 0;
  total +=
      ((2 * x + y) / z) * (pow(y, 3) - z) /
      (((x + 2 * y + 3 * z) / (z - 2 * y - 3 * x)) + pow(x, 2) + pow(z, 2));
  return total;
}

int main() {
  double x = 0, y = 0, z = 0;
  cin >> x >> y >> z;
  cout << fixed << setprecision(8) << evaluaFormula(x, y, z);
}

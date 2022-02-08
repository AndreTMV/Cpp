#include <bits/stdc++.h>
using namespace std;

int main() {
  float a = 0.0, b = 0.0, hipotenusa = 0.0;
  cin >> a;
  cin >> b;
  hipotenusa = sqrt((a * a) + (b * b));
  cout << fixed << setprecision(2) << trunc(hipotenusa * 100) / 100.0f;
  return 0;
}

#include <iostream>
#include <random>

using namespace std;

int main() {
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution<int> dist(2, 7);
  int n = dist(mt);
  char mural[n][n];
  cout << n << "\n";
  for (int index = 0; index < n; ++index) {
    for (int jndex = 0; jndex < n; ++jndex) {
      random_device al;
      mt19937 aw(al());
      uniform_int_distribution<int> disti(0, 1);
      int randomShit = disti(aw);
      /* cout << randomShit << "\t"; */
      if (randomShit == 0)
        mural[index][jndex] = '.';
      else if (randomShit == 1)
        mural[index][jndex] = '#';
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      cout << mural[i][j];
    }
    cout << "\n";
  }
}

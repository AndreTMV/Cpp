#include <algorithm>
#include <iostream>
#include <vector>
using std::vector, std::cout, std::cin, std::find, std::unique;
void llenarArreglo(vector<int> &arr) {
  for (auto &i : arr) {
    cin >> i;
  }
}

int main() {
  int N = 0;
  cin >> N;
  vector<int> fila1(N);
  vector<int> fila2(N);
  vector<int> fila3(N);
  llenarArreglo(fila1);
  llenarArreglo(fila2);
  llenarArreglo(fila3);
  vector<int> total;
  for (size_t i = 0; i < fila1.size(); ++i) {
    int temp = fila1[i];
    if ((find(fila2.begin(), fila2.end(), temp) != fila2.end()) &&
        (find(fila3.begin(), fila3.end(), temp) != fila3.end())) {
      total.push_back(temp);
    }
  }
  sort(total.begin(), total.end());
  total.erase(unique(total.begin(), total.end()), total.end());
  for (auto i : total) {
    cout << i << " ";
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

void llenarArreglo(vector<int> &arr) {
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }
}

int main() {
  int N = 0;
  string ganador;

  vector<int> axa(N);
  llenarArreglo(axa);
  int maxAxa = *max_element(axa.begin(), axa.end());
  int indexAxa = max_element(axa.begin(), axa.end()) - axa.begin();

  vector<int> rafa(N);
  llenarArreglo(rafa);
  int maxRafa = *max_element(rafa.begin(), rafa.end());
  int indexRafa = max_element(rafa.begin(), rafa.end()) - rafa.begin();

  if (maxAxa > maxRafa) {
    if (indexAxa <= indexRafa) {
      ganador = "Axyoan";
    }
  } else if (maxRafa > maxAxa) {
    if (indexRafa <= indexAxa) {
      ganador = "Rafael";
    }
  } else {
    ganador = "nadie";
  }

  vector<int> ivan(N);
  llenarArreglo(ivan);
  int maxIvan = *max_element(ivan.begin(), ivan.end());
  int indexIvan = max_element(ivan.begin(), ivan.end()) - ivan.begin();

  vector<int> wen(N);
  llenarArreglo(wen);
  int maxWen = *max_element(wen.begin(), wen.end());
  int indexWen = max_element(wen.begin(), wen.end()) - wen.begin();

  return 0;
}

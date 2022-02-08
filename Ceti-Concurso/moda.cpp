#include <iostream>
using namespace std;

int main() {
  int N = 0, moda = 0, elementModa = 0;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < N; ++i) {
    int count = 0;
    int element = arr[i];
    for (int j = 0; j < N; ++j) {
      if (element == arr[j]) {
        count++;
      }
    }
    if (count > moda) {
      moda = count;
      elementModa = element;
    }
  }
  cout << elementModa;
  return 0;
}

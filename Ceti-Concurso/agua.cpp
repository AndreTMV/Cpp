#include <iostream>
using std::cin, std::cout;

int main() {
  int N = 0, min = 0;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }
  min = arr[0];
  for (int i = 1; i < N; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  cout << min;
}

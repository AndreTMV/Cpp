#include <iostream>
using std::cout, std::cin, std::max;

int main() {
  int N = 0, M = 0, maxElement = 0;
  cin >> N >> M;
  int arr[N];
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i <= N - M; i++) {
    int temp = 0;
    for (int j = i; j < M + i; j++) {
      temp += arr[j];
    }
    maxElement = max(temp, maxElement);
  }
  cout << maxElement;
  return 0;
}

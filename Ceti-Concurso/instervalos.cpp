#include <iostream>
using std::cout, std::cin;

int main() {
  int N = 0, M = 0, I = 0, F = 0;
  cin >> N;
  cin >> M;
  int arr[N] = {};
  for (int i = 0; i < M; i++) {
    cin >> I >> F;
    for (; I < F; ++I) {
      arr[I]++;
    }
  }
  for (int i = 0; i < N; ++i) {
    cout << arr[i] << " ";
  }
  return 0;
}
/* int main() { */
/*   int M = 0, N = 0; */
/*   cin >> N; */
/*   cin >> M; */
/*   vector<int> arr(N, 0); */
/*   for (int i = 0; i < M; ++i) { */
/*     int I = 0, F = 0; */
/*     cin >> I >> F; */
/*     for_each(arr.begin() + I, arr.begin() + F - 1, [](int &n) { n++; }); */
/*   } */
/*   for (auto i : arr) { */
/*     cout << i << " "; */
/*   } */
/*   return 0; */
/* } */

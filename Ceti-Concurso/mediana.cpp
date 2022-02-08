#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  vector<int> arr(N);
  vector<int> sorted(N);
  for (int i = 0; i < N; ++i) {
    cin >> arr[i];
    sorted[i] = arr[i];
  }
  sort(sorted.begin(), sorted.end());
  int mediana = sorted[N / 2];
  auto it = find(arr.begin(), arr.end(), mediana);
  int index = it - arr.begin();
  cout << mediana << " " << index;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  vector<int> arr(N);
  for (int i = 0; i < N; ++i) {
    int temp = 0;
    cin >> temp;
    if (temp == -1) {
      cout << " ";
      return 0;
    } else {
      arr[i] = temp;
    }
  }
  sort(arr.begin(), arr.end());
  arr.erase(unique(arr.begin(), arr.end()), arr.end());
  for (auto i : arr) {
    cout << i << "\n";
  }
  return 0;
}

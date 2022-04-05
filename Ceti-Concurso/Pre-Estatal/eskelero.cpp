#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  vector<int> arr(N, 0);
  for (auto &i : arr) {
    cin >> i;
  }
  sort(arr.begin(), arr.end());
  for (auto i : arr) {
    cout << i << " ";
  }
  return 0;
}

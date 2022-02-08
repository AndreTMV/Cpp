#include <iostream>
using std::cout, std::cin;

signed int arr[5];

int main() {
  bool swaped;
  for (int i = 0; i < 5; ++i) {
    cin >> arr[i];
  }
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      if (arr[j] < arr[j + 1]) {
        signed int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swaped = true;
      }
    }
    if (swaped == false)
      break;
  }
  for (int i = 0; i < 5; ++i) {
    cout << arr[i] << " ";
  }
  return 0;
}

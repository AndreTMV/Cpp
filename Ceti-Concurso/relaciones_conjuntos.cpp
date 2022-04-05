#include <iostream>
using std::cout, std::cin;

void fill_arr(int *arr, int size) {
  for (int index = 0; index < size; ++index) {
    cin >> arr[index];
  }
}

bool find_element(int *arr, int size, int element) {
  for (int index = 0; index < size; ++index) {
    if (arr[index] == element)
      return true;
  }
  return false;
}

int main() {
  int size1 = 0, size2 = 0, total = 0;
  cin >> size1 >> size2;
  int A[size1], B[size2];
  fill_arr(A, size1);
  fill_arr(B, size2);
  if (size1 == size2) {
    for (int index = 0; index < size1; ++index) {
      if (find_element(A, size1, B[index]))
        total++;
    }
    if (total == size1) {
      cout << "A = B\n";
      return 0;
    } else {
      cout << "A != B\n";
      return 0;
    }
  } else if (size1 > size2) {
    for (int index = 0; index < size2; ++index) {
      if (find_element(A, size1, B[index]))
        total++;
    }
    if (total == size2) {
      cout << "A > B\n";
      return 0;
    } else {
      cout << "A != B\n";
      return 0;
    }
  } else {
    for (int index = 0; index < size1; ++index) {
      if (find_element(B, size2, A[index]))
        total++;
    }
    if (total == size1) {
      cout << "A < B\n";
      return 0;
    } else {
      cout << "A != B\n";
      return 0;
    }
  }
}

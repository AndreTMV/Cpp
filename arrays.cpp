#include <iostream>
using std::cout, std::cin, std::endl;

template <typename T> void newArr(T *&arr, int &size) {
  size += 1;
  int *arreglo = new T[size];
  for (int i = 0; i < size; ++i) {
    arreglo[i] = arr[i];
  }
  arreglo[size - 1] = 1;
  delete[] arr;
  arr = arreglo;
}

int main() {
  int size = 0;
  cout << "Tamaño del arreglo: ";
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; ++i) {
    cout << "Elemento " << i + 1 << ": " << endl;
    cin >> arr[i];
  }
  newArr(arr, size);
  cout << "Nuevo tamaño: " << size << endl;
  for (int i = 0; i < size; ++i) {
    cout << "Elemento " << i + 1 << ": " << arr[i] << endl;
  }
  return 0;
}

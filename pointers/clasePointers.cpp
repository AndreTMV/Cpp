#include <iostream>

int arrarC(int *ptr, int size) {
  for (int i = 0; i < size; ++i) {
    ptr[i] = i;
  }
  for (int i = 0; i < size; ++i) {
    std::cout << *(ptr + i) << std::endl;
  }
  return 0;
}

int main() {

  /* int var = 0; */
  /* int *ptr; // apunta a una direccion de memoria */
  /* ptr = &var; */
  /* std::cout << *ptr << std::endl; */
  /* std::cout << ptr << std::endl; */
  /* *ptr += 1; */
  /* std::cout << *ptr << std::endl; */
  /* std::cout << var << std::endl; */
  int ptr = {1, 2, 3, 4, 5};
  arrarC(ptr);

  return 0;
}

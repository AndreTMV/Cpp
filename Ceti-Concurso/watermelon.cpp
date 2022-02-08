#include <iostream>
using std::cout, std::endl, std::cin;

bool watermelon(unsigned short int kilos) { return (kilos % 2 == 0); }

int main() {
  unsigned short int kilos = 0;
  cin >> kilos;
  if (watermelon(kilos) && kilos > 2)
    cout << "SI" << endl;
  else
    cout << "NO" << endl;
  return 0;
}

#include <iostream>
using std::cout, std::cin, std::endl, std::string;

int main() {
  unsigned short int contador = 1;
  string instructores;
  getline(cin, instructores);
  for (size_t index = 0; index < instructores.size(); ++index) {
    if (instructores[index] == ' ')
      contador += 1;
  }
  cout << contador << endl;
  cout << instructores;
}

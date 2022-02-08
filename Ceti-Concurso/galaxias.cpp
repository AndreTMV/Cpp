#include <iostream>
using std::cout, std::cin, std::endl, std::string;

int main() {
  unsigned long a = 0, b = 0, c = 0;
  cin >> a >> b >> c;
  cout << ((a < b) ? "True " : "False ") << ((c > a) ? "True " : "False ")
       << ((a == b) ? "True " : "False ") << ((a != c) ? "True " : "False ")
       << ((c <= b) ? "True " : "False ");
  return 0;
}

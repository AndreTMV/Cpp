#include <cmath>
#include <cstring>
#include <iostream>
#include <sstream>
using std::pow;

unsigned long long powerOfSum(std::string number) {
  unsigned long long sum = 0;
  for (int i = 0; i < number.length(); ++i) {
    if (number[i] == '.') {
      break;
    }
    sum += (unsigned long long)number[i] - 48;
  }
  return sum;
}

std::string conversion(double counts) {
  std::ostringstream ss;
  ss.precision(1);
  ss << std::fixed << counts;
  return ss.str();
}

int main() {
  std::string mystring = conversion(pow(2, 1000));
  std::cout << mystring << std::endl;
  std::cout << powerOfSum(mystring) << std::endl;
  /* std::cout << powerOfSum(2) << std::endl; */
}

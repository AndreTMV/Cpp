#include <iostream>
#include <map>
using std::cout, std::cin, std::endl, std::string, std::map;
map<int, string> ones = {{1, "one"},   {2, "two"},   {3, "three"},
                         {4, "four"},  {5, "five"},  {6, "six"},
                         {7, "seven"}, {8, "eight"}, {9, "nine"}};
map<int, string> tens_ones = {{10, "ten"},
                              {11, "eleven"},
                              {12, "twelve"},
                              {13, "thirteen"},
                              {14, ones[4] + "teen"},
                              {15, "fifteen"},
                              {16, ones[6] + "teen"},
                              {17, ones[7] + "teen"},
                              {18, ones[8] + "een"},
                              {19, ones[9] + "teen"}};
map<int, string> tens = {{20, "twenty"}, {30, "thirty"}, {40, "forty"},
                         {50, "fifty"},  {60, "sixty"},  {70, "seventy"},
                         {80, "eighty"}, {90, "ninety"}};
string numberToWords(int number) {
  string words;
  if (number < 10) {
    return ones[number];
  }
  if ((10 <= number) && (number <= 19)) {
    return tens_ones[number];
  }
  if ((20 <= number) && (number <= 99)) {
    if (number % 10 == 0)
      return tens[number];
    else {
      words = tens[(number / 10) * 10] + ones[number % 10];
      return words;
    }
  }
}

string numberToHundred(int number) {
  string words;
  if (number == 1000)
    return "onethousand";
  if (number % 100 == 0)
    return ones[number / 100] + "hundred";
  string hundred_place = ones[number / 100] + "hundred";
  string decimal_place = numberToWords((number % 100));
  words = hundred_place + "and" + decimal_place;
  return words;
}

int main() {
  string words;
  int total = 0;
  for (int number = 0; number <= 1000; ++number) {
    if (number < 100) {
      words = numberToWords(number);
      total += words.length();
    } else {
      words = numberToHundred(number);
      total += words.length();
    }
  }
  cout << total << endl;
  return 0;
}

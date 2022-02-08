#include <bits/stdc++.h>
using std::cin, std::cout, std::endl, std::vector;

int main() {
  long N = 0, dia = 0, cuenta = 0;
  cin >> N;
  std::map<long, long> total;
  for (size_t i = 0; i < N; ++i) {
    cin >> dia;
    std::map<long, long>::iterator it = total.find(dia);
    if (it != total.end())
      it->second++;
    else
      total.insert(std::make_pair(dia, 0));
  }
  auto result =
      std::accumulate(std::begin(total), std::end(total), 0,
                      [](const std::size_t previous, const auto &element) {
                        return previous + element.second;
                      });
  cout << result << "\n";
  return 0;
}

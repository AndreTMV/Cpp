#include <bits/stdc++.h>
using namespace std;

/* bool compare_letters(string A, string B) { */
/*   for_each(A.begin(), A.end(), [](char &letra) { letra = ::tolower(letra);
 * }); */
/*   for_each(B.begin(), B.end(), [](char &letra) { letra = ::tolower(letra);
 * }); */
/*   if (A.size() > B.size()) { */
/*     for (size_t index = 0; index < B.size(); ++index) { */
/*       if (A[index] > B[index]) */
/*         return true; */
/*       else if (A[index] == B[index]) */
/*         continue; */
/*       else */
/*         return false; */
/*     } */
/*   } else if (A.size() < B.size()) { */
/*     for (size_t index = 0; index < A.size(); ++index) { */
/*       if (A[index] > B[index]) */
/*         return true; */
/*       else if (A[index] == B[index]) */
/*         continue; */
/*       else */
/*         return false; */
/*     } */
/*   } else { */
/*     for (size_t index = 0; index < A.size(); ++index) { */
/*       if (A[index] > B[index]) */
/*         return true; */
/*       else if (A[index] == B[index]) */
/*         continue; */
/*       else */
/*         return false; */
/*     } */
/*   } */
/* } */

/* void sort_alfabeticamente(vector<string> &nombres) { */
/*   for (int index = 0; index < nombres.size() - 1; ++index) { */
/*     for (int j = index; j < nombres.size() - 1; ++j) { */
/*       if (compare_letters(nombres[j], nombres[j + 1])) { */
/*         string temp = nombres[j + 1]; */
/*         nombres[j + 1] = nombres[j]; */
/*         nombres[j] = nombres[j + 1]; */
/*       } */
/*     } */
/*   } */
/* } */

vector<string> todos_min(vector<string> nombres) {
  vector<string> nombresMin;
  for (int index = 0; index < nombres.size(); ++index) {
    string conver = minusculas(nombres[index]);
    nombresMin.push_back(conver);
  }
  return nombresMin;
}

string minusculas_gg(string A) {
  string B;
  for (int index = 0; index < A.size(); ++index) {
    B.push_back(::tolower(A[index]));
  }
  return B;
}

int main() {
  int N = 0;
  cin >> N;
  vector<string> nombres(N);
  for (auto &i : nombres) {
    cin >> i;
  }
  vector<string> nuevo = todos_min(nombres);
  sort(nuevo.begin(), nuevo.end());
  cout << "Salida:\n";
  for (int index = 0; index < nuevo.size(); ++index) {
    if (nuevo[index] == nombres[index])
  }
  return 0;
}

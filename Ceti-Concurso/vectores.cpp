#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::vector, std::string;
void imprimeVector(const vector<int> arreglo) {
  for (auto elemento : arreglo) {
    cout << elemento << " ";
  }
}
void llenaVector(vector<int> &arreglo) {
  for (size_t index = 0; index < arreglo.size(); ++index) {
    cin >> arreglo[index];
  }
}

void sumaVectores(vector<int> arreglo, vector<int> &sumaArr) {
  for (size_t index = 0; index <= 1; ++index) {
    sumaArr.push_back(arreglo[index] + arreglo[index + 2]);
  }
}

void respuestas(vector<int> &arr, vector<int> &arr1, vector<int> &arr2,
                vector<int> &arr3) {
  llenaVector(arr);
  llenaVector(arr1);
  llenaVector(arr2);
  llenaVector(arr3);
}

bool compara(vector<int> arr, vector<int> arr1) {
  for (size_t index = 0; index < arr.size(); ++index) {
    if (!(arr[index] == arr1[index]))
      return false;
  }
  return true;
}

string comparaArreglos(vector<int> arr, vector<int> r1, vector<int> r2,
                       vector<int> r3, vector<int> r4) {
  if (compara(arr, r1)) {
    return "A";
  }
  if (compara(arr, r2)) {
    return "B";
  }
  if (compara(arr, r3)) {
    return "C";
  }
  if (compara(arr, r4)) {
    return "D";
  }
}

void respuestaEnCadena(string &cadenaR, vector<int> arreglo1,
                       vector<int> respuesta1, vector<int> respuesta2,
                       vector<int> respuesta3, vector<int> respuesta4) {
  vector<int> sumArr;
  llenaVector(arreglo1);
  respuestas(respuesta1, respuesta2, respuesta3, respuesta4);
  sumaVectores(arreglo1, sumArr);
  cadenaR +=
      comparaArreglos(sumArr, respuesta1, respuesta2, respuesta3, respuesta4);
}

int main() {
  vector<int> arreglo(4), respuesta1(2), respuesta2(2), respuesta3(2),
      respuesta4(2);
  string cadenaR;
  int numeroEjercicios = 0;
  cin >> numeroEjercicios;
  for (size_t index = 0; index < numeroEjercicios; ++index) {
    respuestaEnCadena(cadenaR, arreglo, respuesta1, respuesta2, respuesta3,
                      respuesta4);
  }
  cout << cadenaR;
  return 0;
}

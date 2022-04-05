#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void fillArray(vector<int> &arr) {
  for (auto &elemento : arr) {
    cin >> elemento;
  }
}

class estudiante {
public:
  string name;
  int index;
  int val;
  estudiante(string nombre, int ind, int valor)
      : name(nombre), index(ind), val(valor){};
  estudiante() : name(""), index(0), val(0){};
  bool operator==(estudiante &alguien) {
    if (this->index == alguien.index and this->val == alguien.val)
      return true;
    return false;
  }
  bool operator>(estudiante &alguien) {
    if (this->val > alguien.val) {
      return true;
    } else if (this->val == alguien.val) {
      if (this->index < alguien.index)
        return true;
      else
        return false;
    }
    return false;
  }
  bool operator<(estudiante &alguien) {
    if (this->val < alguien.val) {
      return true;
    } else if (this->val == alguien.val) {
      if (this->index > alguien.index)
        return true;
      else
        return false;
    }
    return false;
  };
};

estudiante mayor(estudiante &alguien1, estudiante &alguien2,
                 estudiante &empate) {
  if (alguien1 == alguien2) {
    empate.index = alguien1.index;
    empate.val = alguien1.val;
  } else if (alguien1 > alguien2)
    return alguien1;
  else if (alguien2 > alguien1)
    return alguien2;
  return empate;
}

int main() {
  int N = 0;
  cin >> N;
  estudiante empate("Ups, hubo empate", 0, 0);
  estudiante ganador("", 0, 0);
  vector<estudiante> vatos(4);
  vatos[0].name = "Axyoan";
  vatos[1].name = "Ivan";
  vatos[2].name = "Rafa";
  vatos[3].name = "Wen";

  vector<int> axy(N);
  fillArray(axy);
  vatos[0].val = *max_element(axy.begin(), axy.end());
  vatos[0].index = (max_element(axy.begin(), axy.end()) - axy.begin());

  vector<int> ivan(N);
  fillArray(ivan);
  vatos[1].val = *max_element(ivan.begin(), ivan.end());
  vatos[1].index = (max_element(ivan.begin(), ivan.end()) - ivan.begin());

  vector<int> rafa(N);
  fillArray(rafa);
  vatos[2].val = *max_element(rafa.begin(), rafa.end());
  vatos[2].index = (max_element(rafa.begin(), rafa.end()) - rafa.begin());

  vector<int> wen(N);
  fillArray(wen);
  vatos[3].val = *max_element(wen.begin(), wen.end());
  vatos[3].index = (max_element(wen.begin(), wen.end()) - wen.begin());

  ganador = mayor(vatos[0], vatos[1], empate);
  ganador = mayor(ganador, vatos[2], empate);
  ganador = mayor(ganador, vatos[3], empate);

  cout << vatos[0].name << ": " << vatos[0].val << ", " << vatos[0].index
       << "\n";
  cout << vatos[1].name << ": " << vatos[1].val << ", " << vatos[1].index
       << "\n";
  cout << vatos[2].name << ": " << vatos[2].val << ", " << vatos[2].index
       << "\n";
  cout << vatos[3].name << ": " << vatos[3].val << ", " << vatos[3].index
       << "\n";
  cout << "Actual: " << ganador.name << ": " << ganador.val << ", "
       << ganador.index << "\n";
  cout << "Actual: " << ganador.name << ": " << ganador.val << ", "
       << ganador.index << "\n";
  cout << "Actual: " << ganador.name << ": " << ganador.val << ", "
       << ganador.index << "\n";

  if (ganador.name == empate.name)
    cout << ganador.name << "\n";
  else {

    cout << "El ganador fue " << ganador.name << " con el numero "
         << ganador.val << " en el segundo " << ganador.index + 1 << "\n";
  }
  return 0;
}

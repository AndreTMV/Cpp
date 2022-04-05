#include <algorithm>
#include <iostream>
#include <map>
#include <random>
using std::cout, std::cin, std::endl, std::map, std::make_pair,
    std::random_device, std::mt19937;

int randomNumbers(int rango) {
  random_device dt;
  mt19937 mt(dt());
  std::uniform_int_distribution<int> dist(1, rango);
  return dist(mt);
}

void initializeMap(map<int, int> &frecuencia, int rango) {
  for (size_t numero = 1; numero <= rango; ++numero) {
    frecuencia.insert(make_pair(numero, 0));
  }
}

void fillMap(map<int, int> &frecuencia, int totalDatos, int rango) {
  for (size_t iteration = 0; iteration < totalDatos; ++iteration) {
    int data = randomNumbers(rango);
    frecuencia[data]++;
  }
}

void printMap(map<int, int> frecuencia) {
  for (auto &it : frecuencia) {
    cout << it.first << ": ";
    for (size_t star = 0; star < it.second; ++star) {
      cout << "* ";
    }
    cout << "\n";
  }
}

void maxValue(map<int, int> frecuencia) {
  std::map<int, int>::iterator best = std::max_element(
      frecuencia.begin(), frecuencia.end(),
      [](const std::pair<int, int> &a, const std::pair<int, int> &b) -> bool {
        return a.second < b.second;
      });
  cout << "Elemento moda: " << best->first << ", aparaciones: " << best->second
       << "\n";
}

int main() {
  map<int, int> frecuencia;
  int totalDatos = 0, rango = 0;
  cout << "Cantidad de numeros aleatorios: ";
  cin >> totalDatos;
  cout << "Numero tope: ";
  cin >> rango;
  initializeMap(frecuencia, rango);
  fillMap(frecuencia, totalDatos, rango);
  printMap(frecuencia);
  maxValue(frecuencia);
  return 0;
}

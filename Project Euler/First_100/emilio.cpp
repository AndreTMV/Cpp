#include <iostream>
using std::cout, std::cin, std::endl;
class estudiante {
public:
  void leer();
  void suma();
  void porcentajes();
  void imprimir();
  float parcial1, parcial2, parcial3, sumaParciales, porcentajeParciales,
      calificacionMinimaExamen, porcentajeExamen;
};

void estudiante::leer() {
  std::cout << "Parcial 1" << std::endl;
  cin >> parcial1;
  std::cout << "Parcial 2" << std::endl;
  cin >> parcial2;
  std::cout << "Parcial 3" << std::endl;
  cin >> parcial3;
}

void estudiante::suma() {
  sumaParciales = parcial1 + parcial2 + parcial3;
  sumaParciales /= 3;
}

void estudiante::porcentajes() {
  porcentajeParciales = sumaParciales * .6;
  calificacionMinimaExamen = (71 - porcentajeParciales) / .4;
  porcentajeExamen = 71 - porcentajeParciales;
}

void estudiante::imprimir() {
  cout << "Calificaciones de los parciales:\nParcial 1: " << parcial1
       << "\nParcial 2: " << parcial2 << "\nParcial 3: " << parcial3 << endl;
  cout << "Porcentajes:\nPorcentaje final de los parciales: "
       << porcentajeParciales
       << "%\nPorcentaje minimo del examen para pasar: " << porcentajeExamen
       << "%" << endl;
  cout << "Calificacion minima del examen para pasar el semestre: "
       << calificacionMinimaExamen << endl;
}

int main() {
  estudiante obj1;
  obj1.leer();
  obj1.suma();
  obj1.porcentajes();
  obj1.imprimir();
}

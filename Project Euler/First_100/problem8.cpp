#include <iostream>

// structuras == clases, solo que no se puede encapsular
struct Persona {
  int edad;
  void leerMostrar();
} Andre;

void Persona::leerMostrar() {
  std::cout << "Edad: " << std::endl;
  std::cin >> edad;
  std::cout << edad << std::endl;
}

// sobre carga de funciones
int Suma(int a, int b) { return a + b; }
int Suma(int a, int b, int c) { return a + b + c; }
double Suma(double a, double b) { return a + b; }

long long largestProductInDigit(const char *number) {
  unsigned long long tempProduct = 0, largestProduct = 0;
  // aritmetica de punteros
  while (*(number + 13) != '\0') {
    tempProduct =
        (unsigned long long)(*(number)-48) * (*(number + 1) - 48) *
        (*(number + 2) - 48) * (*(number + 3) - 48) * (*(number + 4) - 48) *
        (*(number + 5) - 48) * (*(number + 7) - 48) * (*(number + 7) - 48) *
        (*(number + 8) - 48) * (*(number + 9) - 48) * (*(number + 10) - 48) *
        (*(number + 11) - 48) * (*(number + 12) - 48);
    largestProduct =
        (tempProduct > largestProduct) ? tempProduct : largestProduct;
    number++;
  }
  return largestProduct;
}

int main() {
  // ejercicio, ponganlo como una sola cadena y junto para que jale
  const char num[] =
      "731671765313306249192251196744265747423553491949349698352031277450632623"
      "957831801698480186947885184385861560789112949495459501737958331952853208"
      "805511125406987471585238630507156932909632952274430435576689664895044524"
      "452316173185640309871112172238311362229893423380308135336276614282806444"
      "486645238749303589072962904915604407723907138105158593079608667017242712"
      "188399879790879227492190169972088809377665727333001053367881220235421809"
      "751254540594752243525849077116705560136048395864467063244157221553975369"
      "781797784617406495514929086256932197846862248283972241375657056057490261"
      "407972968652414535100474821663704844031998900088952434506585412275886668"
      "811642717147992444292823086346567481391912316282458617866458359124566529"
      "476545682848912883142607690042242190226710556263211111093705442175069416"
      "589604080719840385096245544436298123098787992724428490918884580156166097"
      "919133875499200524063689912560717606058861164671094050775410022569831552"
      "0005593572972571636269561882670428252483600823257530420752963450";
  std::cout << "Numero: " << num << std::endl;
  std::cout << "Resultado: " << largestProductInDigit(num) << std::endl;
  // sobre carga de funciones
  std::cout << Suma(1, 2) << std::endl;
  std::cout << Suma(2, 2, 3) << std::endl;
  std::cout << Suma(1.12, 2.18) << std::endl;
  // estructuras
  Andre.leerMostrar();
  return 0;
}

#include <iostream>
using std::cout, std::cin, std::endl;

void Mayusculas(char *);
void Despliega(char *);

int main(){
  char cadena[80] = "hola";
  Mayusculas(cadena);
  Despliega(cadena);


}

void Mayusculas(char* cadena){
  while(*cadena){
    if(*cadena >= 'a' && *cadena <= 'z'){
      *cadena -= 32;
    }
    cadena++;
  }
}

void Despliega(char *cadena){
  while(*cadena != 0){
    cout << *cadena;
    cadena++;
  }
  cout << endl;
}

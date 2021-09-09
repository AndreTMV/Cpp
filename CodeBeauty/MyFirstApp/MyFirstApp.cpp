#include <iostream>
using std::cout,std::endl, std::cin;

int main()
{
  // First video
  cout <<"Hello world!" << endl; 

  // Second Video
  float annualSalary = 0;
  cout << "How much you earn per year: "; 
  cin >> annualSalary;
  float monthlySalary = annualSalary/12;
  cout << "Your monthly salary is " << monthlySalary << endl; 
  cout << "In 10 years you will earn: " << annualSalary*10 << endl;

  //Third video
  int yearOfBirth = 2004;
  char gender = 'M';
  bool isOlderThan18 = false;
  float averageGrade = 9.6;
  double balance = 15423423.34231312;
  long xNumber = 12345345143;

  cout << "Size of int is " << sizeof(int) << " bytes\n";
  // -1, -2, -3, ...., -2147483648
  cout << "Int min value is " << INT32_MIN << endl;
  // 0, 1, 2, 3, ...., 2147483647
  cout << "Int max value is " << INT32_MAX << endl;
  cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
  cout << "UInt max value is " << UINT32_MAX << endl;
  cout << "Size of bool is " << sizeof(bool) << " bytes\n";
  cout << "Size of char is " << sizeof(char) << " bytes\n";
  cout << "Size of float is " << sizeof(float) << " bytes\n";
  cout << "Size of double is " << sizeof(double) << " bytes\n";
  cout << "Size of long is " << sizeof(long) << " bytes\n";

  // Fourth Video
  int intMax = INT32_MAX;
  // data overflow -> funciona igual que el reloj, de 12 se va 1 no a 13
  cout << intMax + 1 << endl;
  
  system("clear");
  // Fifth video -- Ascii
  /*for (int i = 0; i < 160; i++) {
    cout << char(i) << endl; 
  }*/

  // Sixth video if-else 
  int number = 0;
  cout << "Number: " << endl;
  cin >> number;
  if(number % 2 == 0)
    cout << "The number is even\n";
  else
    cout << "The number is odd\n";
  
  system("clear");
  float x,y,c; 
  cout << "Triangles sides: ";
  cin >> x >> y  >> c;

  if(x == y && y == c){
    cout << "Equilateral\n";
  }
  else{
    if(x!=c && y!=c && y!=x)
      cout << "scalene\n";
    else
      cout << "isosceles\n";
  }
  system("clear"); 

  // Seventh video -- operators
  int counter = 7;
  // Post increment
  counter++;
  cout << counter << endl;
  // Post decrement
  counter--;
  cout << counter << endl;
  
  int counter2 = 7;
  //Pre increment
  cout << ++counter2 << endl;
  // Pre decrement
  cout << --counter2 << endl;

  //Los operadores aritmeticos van primero, despues relacionales, y logicos

  system("clear");

  int a = 5, b = 4;
  cout << a + (b++) << endl; //9
  cout << (--a) + b << endl;//9

  cout << !(true && false) << endl; //1
  cout << (true && false || true) << endl; //1

  int t = 7;
  cout << (++t <= 9 && t + 2 >= 10); //1
  int u = 3;
  cout << (u == u++) << endl; //1
  float z = 8;
  z += 2;
  cout << z << endl; // 10;
  z/=2;
  cout << z << endl; // 5; 

  system("clear");

  //Swaping values without a third variable
  int p = 10, k = 19;
  p = p + k;
  k = p - k;
  p = p - k;
  cout << p << " " << k << endl;

  system("clear");

  float weight = 0, height = 0, imc = 0;
  cout << "Height(m): " << endl;
  cin >> height;
  cout << "Weight(kg): " << endl;
  cin >> weight;
  imc = weight/(height * height);
  if(imc <= 18.5)
    cout << "Underweight, BMI = " << imc << endl;
  else if(imc >= 25)
    cout << "Overweight, BMI = " << imc  << endl;
  else
    cout << "Normal weight, BMI = " << imc << endl;
  system("clear");
  int hostUserNum = 0, guestUserNum = 0;
  cout << "Host: ";
  cin >> hostUserNum;
  system("clear");
  cout << "Guest: ";
  cin >> guestUserNum;
  system("clear");
  (hostUserNum == guestUserNum)? cout << "Correct!\n":cout << "False!\n";     
  system("clear");
  //Minuto 3:01:00
  return 0;
}

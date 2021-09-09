#include <iostream>

using std::cout, std::cin, std::endl;

void Increment(int &a);
void Increment(int *p);
int SumOfElements(int* A, int size);
void Double(int *A, int size);
void print(char* c); 
void Func(int (*A)[2][2]); // Argument: 3-D array of integers
void Fund(int (*A)[2]); // Argument: 2-D array of integers
int *Add(int *a, int *b);
int Add(int a,int b);
void Hello(char *name);
void BubbleSort(int *A, int n, int(*compare)(int,int));
int compare(int a,int b);

int main(){
  int a = 1025, *point = &a;
  char *p0 = (char*)point;
  cout << point << endl;
  cout << &a << endl;
  cout << &point << endl;
  cout << *point << endl; // dereference
  //*point = 8; // Changes the value of a
  cout << a << endl;
  cout << point << endl; // if 2002
  cout << point + 1 << endl; // then 2006 because int = 4 bytes
  cout << *point << endl;
  cout << *(point+1) << endl;
  system("clear");

  cout << "Address: " << point << "Value: " << *point << endl;
  cout << "Address: " << point + 1 << "Value: " << *(point+1) << endl;

  cout << "Address: " << p0 << "Value: " << *p0 << endl;
  cout << "Address: " << p0+1 << "Value: " << *(p0+1) << endl;

  system("clear");

  int x = 5, *p = &x;
  *p = 6;
  int **q = &p;
  int ***r = &q;
  cout << p << endl;
  cout << q << endl;
  cout << *p << endl; // 6
  cout << *q << endl; // cout << p;
  cout << *(*q) << endl; // 6
  cout << *r << endl; // cout << q;
  cout << *(*r) << endl; // cout << p
  cout << *(*(*r)) << endl; // 6

  system("clear");

  int b = 10;
  Increment(b);
  cout << b << endl;;
  Increment(b);
  cout << b << endl;;

  system("clear");

  int A[] = {2,4,5,8,1};
  cout << A << endl;
  cout << &A[0] << endl;// ^^ the same
  cout << A[0] << endl;
  cout << *A << endl;// ^^ the same
  for(auto i = 0; i < 5; i++){
    cout << &A[i] << "\t";
  }
  cout << endl;

  for(auto i = 0; i < 5; i++){
    cout << A+i << "\t";
  }
  cout << endl;
  
  for(auto i = 0; i < 5; i++){
    cout << A[i] << "\t";
  }
  cout << endl;

  for(auto i = 0; i < 5; i++){
    cout << *(A+i) << "\t";
  }
  cout << endl;

  system("clear");
  int B[] = {1,2,2,4,3};
  int size = sizeof(B)/sizeof(B[0]), sum = 0;
  //sum = SumOfElements(B, size); 
  //cout << sum << endl;
  Double(B,size);
  for (int i = 0; i < size; ++i) {
    cout << A[i] << endl;  
  }
  cout << endl;
  // las cadenas en C terminan con el caracter null(\0)
  // el espacio necesario para almacenar una cadena de caracteres = size of array + 1
  // Arrays are always passed to functions by reference
  //
  system("clear");

  char c[] = "Hello";
  print(c);

  system("clear");

  //char C[20] = "Hello"; // string gets stored in the space for array
  //char *C = "Hello"; // string gets stored as compile time constant
  system("clear");
  int R[2][3] = {1,2,3,5,6,7};
  int (*PE)[3] = R;
  cout << R << ": " << &R[0] << ": " << *R << ": " << R[0] << ": "<< &R[0][0] << endl;
  cout << R+1 << ": " << &R[1] <<  ":" << *(R+1) << ": " << R[1] << ": "<< &R[1][0] << endl;
  cout << *(R+1)+2 << ": " << R[1]+2 << ": " << &R[1][2] << endl;
  cout << *(*R+1) << ": " << R[0][1] << endl;
  // B[i][j] == *(B[i] + j) -> *(*(B+i)+j)
  // C[i][j][k] = *(C[i][j]+k) = *(*(C[i]+j)+k) = *(*(*(C+i)+j)+k)


  cout << R << ": " << *R << ": " << R[0] << endl; 

  system("clear");

  int l = 2, ñ = 3;
  int *ptr = (Add(&l, &ñ));
  cout << *ptr << endl;

  system("clear");

  //Pointers to functions
  int m;
  int (*Ptr)(int,int);//syntax to point to a function
  Ptr = &Add; //-> Ptr = Add;
  m = (*Ptr)(2,3);//->m = p(2,3); //de-referencing and executing the function
  cout << m << endl;
  
  void (*u)(char*);
  u = Hello;
  u("Andre");
  
  int i = 0, F[] = {5,3,8,9};
  BubbleSort(F,4,compare/*callback*/);
  for (i = 0; i < 4; i++) {
    cout << F[i] << "\t";    
  }
  //memory leak: improper use of dynamic memory of the heap section of memory that causes the memory consumption of our program to increase over a period of 18:37
  //memory leak always happens because of unused and unreferenced memory blocks in the heap
  return 0;
}

void Increment(int &a){
  a = a + 1;
}

void Increment(int *p){
  *p = (*p) + 1;
}

int SumOfElements(int *A/*->A[0]*/,int size){
  //int size = sizeof(A[0])/sizeof(A[0]);
  int sum = 0;
  for (auto i = 0; i < size; ++i) {
    sum += *(A+i); //A[i] -> the same
  }
  return sum;
}

void Double(int *A, int size){
  for (int i = 0; i < size; i++) {
    A[i] *= 2;
  }
}

void print(/*const ->only read*/char *c){
  while(*c != '\0'){
    cout << *c;
    c++;
  }
  cout << endl;

  system("clear");

  //heap is always passed by reference
  int y; // goes on stack 
  int *o;
  o = new int;
  *o = 10;
  delete o;
  o = new int[20];
  delete[] o;
}

int *Add(int *a, int *b){
  int *c = (int*)malloc(sizeof(int));
  *c = (*a) + (*b);
  free(c);
  return c;
}

int Add(int a, int b){
  return a+b;
}

void Hello(char *name){
  cout << name << endl;
}
void BubbleSort(int *A, int n, int(*compare)(int,int)){
  int i = 0,j = 0,temp = 0;
  for (i = 0; i < n; i++) {
    for(j = 0;j <n-1;j++){
      if(compare(A[j],A[j+1]) > 0){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
      }
    }   
  }
}
int compare(int a,int b){
  if(a > b)
    return 1;
  else
    return -1;
}
//Minuto 2:47:02

#include <iostream>
using std::cout, std::cin, std::endl, std::string;

int main(){
  float num1 = 0.0, num2 = 0.0;
  cout << "**Andre's calculator**" << endl;
  char operation;
  cin >> num1 >> operation >> num2;
  switch(operation){
    case '+':
      cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
      break;
    case '/':
      cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
      break;
    case '%':
      bool isNum1Int, isNum2Int;
      isNum1Int = ((int)num1 == num1);
      isNum2Int = ((int)num2 == num2);
      if(isNum1Int && isNum2Int){
        cout << num1 << '%' << num2 << '=' << (int)num1 % (int)num2 << endl;
        break;
      }
      else{
        cout << "Not valid!" << endl;
        break;
      }
    default:
      cout << "Not valid operation!" << endl;
      break;
  }

}

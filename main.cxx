#include <iostream>
using namespace std;

int main() {
  cout << "Hello Welcome." << "\n";
  char sign;
  cout << " Enter operator ( + - / * %) : ";
  cin >> sign;
  float num1, num2;
  cout << "Enter First number : ";
  cin >> num1;
  cout << "Enter Second number : ";
  cin >> num2;
  switch (sign) {
      case '+':
           cout << num1 << " + " << num2 << " = " << num1 + num2;
           break;
      case '-':
           cout << num1 << " - " << num2 << " = " << num1 - num2;
           break;
      case '/':
           cout << num1 << " / " << num2 << " = " << num1 / num2;
           break;
      case '*':
           cout << num1 << " * " << num2 << " = " << num1 * num2;
           break;
       default:
             cout << "Invalid operator.";
  }
           
  return 0;
}
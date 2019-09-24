#include <iostream>

using namespace std;

void underline();

int main()
{
   int a, b, result;
   char sign;

   underline();

   cout << "Enter first integer: ";
   cin >> a;

   cout << "Enter sign: ";
   cin >> sign;

   cout << "Enter second integer: ";
   cin >> b;

   switch (sign) {
     case '+':
      result = a + b;
     break;
     case '-':
      result = a - b;
     break;
     case '*':
      result = a * b;
     break;
     case '/':
      result = a / b;
     break;
     default:
      cout << "Something went wrong!" << '\n' << endl;
     break;
   }

   cout << a << " " << sign << " " << b << " = " << result << endl;

   underline();

   return 0;
}

void underline(){
  cout << "======================\n";
}

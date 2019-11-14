#include <iostream>

using namespace std;

void reverseNumber();

int reverseNumber(int n) {
  int reversedNumber = 0;
  int remainder = 0;
  while (n != 0) {
    remainder = n % 10;
    reversedNumber = reversedNumber * 10 + remainder;
    n /= 10;
  }

  return reversedNumber;
}

int main() {
  int a = 0;
  int b = 0;

  cin >> a >> b;

  int reversedA = reverseNumber(a);
  int reversedB = reverseNumber(b);

  if (reversedA > reversedB) {
    cout << reversedA << endl;
  } else {
    cout << reversedB << endl;
  }
}

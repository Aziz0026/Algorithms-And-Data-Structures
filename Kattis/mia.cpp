#include <iostream>

using namespace std;

int calculation(int a, int b) {
  if (b > a) {
    swap(b, a);
  }
  if (a == 2 && b == 1) {
    return 100000;
  }
  if (a == b) {
    return a * 100;
  }
  return a * 10 + b;
}

int main() {
  int a = 0, b = 0, c = 0, d = 0;

  while (cin >> a >> b >> c >> d && a != 0 && d != 0) {
    int p1 = calculation(a, b);
    int p2 = calculation(c, d);

    if (p1 == p2) {
      cout << "Tie." << endl;
    } else if (p1 > p2) {
      cout << "Player 1 wins." << endl;
    } else {
      cout << "Player 2 wins." << endl;
    }
  }
}

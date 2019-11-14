#include <iostream>

using namespace std;

int main() {
  int n, a = 0, b = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    char c;

    for (int j = 0; j < 2; j++) {
      cin >> c;
      if (c == '0')
        a++;
    }

    for (int j = 0; j < 2; j++) {
      cin >> c;
      if (c == '0')
        b++;
    }
  }
  int c = min(a / 2, b / 2);
  cout << c << ' ' << a - c * 2 << ' ' << b - c * 2 << endl;
}

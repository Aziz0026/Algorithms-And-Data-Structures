#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  while (n != 0) {
    bool isPossible = false;
    int x, y, z;
    cin >> x >> y >> z;

    if ((x + y) == z)
      isPossible = true;

    if ((x * y) == z)
      isPossible = true;

    if ((x - y) == z)
      isPossible = true;

    if ((y - x) == z)
      isPossible = true;

    if (((x / y) == z) && ((x % y) == 0))
      isPossible = true;

    if (((y / x) == z) && ((y % x) == 0))
      isPossible = true;

    if (isPossible) {
      cout << "Possible\n";
    } else {
      cout << "Impossible\n";
    }

    n--;
  }
}

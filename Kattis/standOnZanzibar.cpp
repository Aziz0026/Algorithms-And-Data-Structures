#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int p, c, total = 0;
    cin >> p;
    cin >> c;
    while (c > 0) {
      if (c - (2 * p) > 0) {
        total += c - (2 * p);
      }
      p = c;
      cin >> c;
    }
    cout << total << endl;
  }
}

#include <climits>
#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;

  int counter = 1;
  while (cin >> n) {
    long min = LONG_MAX;
    long max = LONG_MIN;

    for (int i = 0; i < n; i++) {
      long l;
      cin >> l;

      if (l < min) {
        min = l;
      }

      if (l > max) {
        max = l;
      }
    }

    cout << "Case " << counter << ": " << min << " " << max << " " << max - min
         << endl;

    counter++;
  }
}

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int r, e, c;
    cin >> r >> e >> c;

    int profit = e - c;
    if (r < profit) {
      cout << "advertise" << endl;
    } else if (r > profit) {
      cout << "do not advertise" << endl;
    } else {
      cout << "does not matter" << endl;
    }
  }
}

#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int number;
    cin >> number;

    int king = 0;
    int p;
    cin >> p;
    for (int j = 1; j < number; j++) {
      int x;
      cin >> x;
      if (king != 1 && x != p++) {
        king = j + 1;
      }
    }
    cout << king << endl;
  }
}

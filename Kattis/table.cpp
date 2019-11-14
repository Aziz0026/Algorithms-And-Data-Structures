#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      int number = i * j;
      cout << number;
      if (number >= 10) {
        cout << " ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}

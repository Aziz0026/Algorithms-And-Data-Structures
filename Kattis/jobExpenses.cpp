#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int money;
    cin >> money;

    if (money < 0) {
      sum += money * -1;
    }
  }

  cout << sum << endl;
}

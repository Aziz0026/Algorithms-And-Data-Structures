#include <iostream>

using namespace std;

int main() {
  int n;

  while (cin >> n && n != -1) {
    int ans = 0, z = 0;
    for (int i = 0; i < n; i++) {
      int speed, time;
      cin >> speed >> time;
      ans += speed * (time - z);
      z = time;
    }
    cout << ans << " miles\n";
  }
}

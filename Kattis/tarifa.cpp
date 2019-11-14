#include <iostream>

using namespace std;

int main() {
  int x, n, sum = 0;
  cin >> x;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int mb;
    cin >> mb;
    sum += mb;
  }

  int result = x * n - sum + x;
  cout << result << endl;
}

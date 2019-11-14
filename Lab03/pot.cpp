#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = 0;
  for (int i = 0; i < n; i++) {
    int x = 0;
    cin >> x;
    int power = x % 10;
    x = x / 10;
    result += pow(x, power);
  }

  cout << result << endl;
}

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  double sum = 0;
  for (int i = 0; i < n; i++) {
    double a, b;
    cin >> a >> b;

    sum += a * b;
  }

  cout << setprecision(3) << fixed << sum << endl;
  ;
}

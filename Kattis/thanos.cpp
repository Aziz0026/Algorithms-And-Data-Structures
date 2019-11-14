#include <iomanip>
#include <iostream>

using namespace std;

void solve() {
  long long p, r, f;
  cin >> p >> r >> f;

  long long years = 0;
  while (p <= f) {
    p *= r;
    years++;
  }

  cout << years << endl;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    solve();
  }
}

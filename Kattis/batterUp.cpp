#include "iostream"

using namespace std;

int main() {
  int n;
  cin >> n;

  long double num = 0, denom = 0;

  for (int i = 0; i < n; i++) {
    int r;
    cin >> r;

    if (r != -1) {
      num += r;
      denom++;
    }
  }

  cout << num / denom << endl;
}

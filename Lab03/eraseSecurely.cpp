#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  string a, b;
  cin >> a >> b;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < a.length(); j++) {
      if (a[j] == '0') {
        a[j] = '1';
      } else {
        a[j] = '0';
      }
    }
  }

  if (a == b) {
    cout << "Deletion succeeded" << endl;
  } else {
    cout << "Deletion failed" << endl;
  }
}

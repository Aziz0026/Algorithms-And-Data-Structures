#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int win = n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < s.size() - 1; j++) {
      if (s[j] == 'C' && s[j + 1] == 'D') {
        win--;
        break;
      }
    }
  }

  cout << win << endl;
}

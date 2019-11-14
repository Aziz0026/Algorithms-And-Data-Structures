#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin >> ws;

  for (int i = 0; i < n; i++) {
    string a;
    string b;
    cin >> a;
    cin >> b;

    cout << a << endl;
    cout << b << endl;

    for (int i = 0; i < a.length(); i++) {
      if (a[i] == b[i]) {
        cout << ".";
      } else {
        cout << "*";
      }
    }

    cout << endl << endl;
  }
}

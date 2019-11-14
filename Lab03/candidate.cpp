#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int toint(string x) {
  istringstream ss(x);
  int a;
  ss >> a;
  return a;
}

int main() {
  int n;
  cin >> n;
  cin >> ws;

  for (int i = 0; i < n; i++) {
    int sum = 0;
    string s;
    getline(cin, s);

    if (s == "P=NP") {
      cout << "skipped" << endl;
    } else {
      string number;
      for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+') {
          sum += toint(number);
          number = "";
        } else {
          number += s[i];
          if (i == s.length() - 1)
            sum += toint(number);
        }
      }
      cout << sum << endl;
    }
  }
}

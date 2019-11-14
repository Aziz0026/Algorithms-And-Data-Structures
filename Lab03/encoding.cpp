#include <iostream>
#include <sstream>

using namespace std;

string encode(string s);
string decode(string s);

int main() {
  string s, text;
  cin >> s >> text;

  if (s == "E") {
    cout << encode(text) << endl;
  } else if (s == "D") {
    cout << decode(text) << endl;
  }
}

string encode(string s) {
  string result;
  for (int i = 0; i < s.length(); i++) {
    int times = 1;
    for (int j = i + 1; j < s.size(); j++) {
      if (s[j] == s[i]) {
        times++;
      } else {
        break;
      }
    }
    result += s[i] + to_string(times);
    i += times - 1;
  }
  return result;
}

string decode(string s) {
  string result;
  for (int i = 0; i < s.length(); i += 2) {
    int n = s[i + 1] - '0';
    for (int j = 0; j < n; j++) {
      result += s[i];
    }
  }
  return result;
}

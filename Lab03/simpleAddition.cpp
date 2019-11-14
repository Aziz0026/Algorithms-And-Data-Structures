#include <iostream>
#include <vector>

using namespace std;

vector<int> parseToDigits(string s);

int main() {
  string sA;
  cin >> sA;
  vector<int> a = parseToDigits(sA);

  string sB;
  cin >> sB;
  vector<int> b = parseToDigits(sB);
}

vector<int> parseToDigits(string s) {
  vector<int> converted;
  converted.resize(s.length());

  for (int i = 0; i < s.length(); i++) {
    converted[i] = (int)s[i] - 48;
  }

  return converted;
}

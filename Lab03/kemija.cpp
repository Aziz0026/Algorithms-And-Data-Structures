#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  string result;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u') {
      i = i + 2;
    }
    result += s[i];
  }

  cout << result << endl;
}

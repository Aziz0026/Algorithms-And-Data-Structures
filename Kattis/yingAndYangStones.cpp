#include <iostream>

using namespace std;

int main() {
  string letters;
  int w = 0, b = 0;

  cin >> letters;
  int len = letters.length();

  for (int i = 0; i < len; i++) {
    letters[i] == 'W' ? w++ : b++;
  }

  int result = (b == w) ? 1 : 0;
  cout << result << '\n';
}

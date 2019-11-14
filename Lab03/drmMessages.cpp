#include <iostream>

using namespace std;

int main() {
  string word;
  cin >> word;

  string a, b;
  int index = word.length() / 2;
  int c = 0, d = 0;
  for (int i = 0, j = index; i < index && j < word.length(); i++, j++) {
    a += word[i];
    b += word[j];
    c += word[i] - 'A';
    d += word[j] - 'A';
  }

  for (int i = 0; i < a.length(); i++)
    cout << char('A' + (a[i] - 'A' + b[i] - 'A' + c + d) % 26);
  cout << endl;
}

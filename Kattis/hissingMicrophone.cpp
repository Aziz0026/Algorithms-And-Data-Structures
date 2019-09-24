#include <iostream>

using namespace std;

int main() {
  bool isHiss;
  string word;
  cin >> word;

  for (int i = 0; i < word.length(); i++) {
    isHiss = ((word[i] == 's') && (word[i + 1] == 's')) ? true : false;
    if (isHiss)
      break;
  }

  (isHiss) ? cout << "hiss" : cout << "no hiss";
  cout << '\n';
}

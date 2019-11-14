#include <iostream>

using namespace std;

int main() {
  string word;
  cin >> word;

  string result;
  char previous = word[0];
  result += previous;
  for (int i = 1; i < word.length(); i++) {
    if (word[i] != previous)
      result += word[i];
    previous = word[i];
  }

  cout << result << endl;
}

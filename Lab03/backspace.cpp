#include <iostream>

using namespace std;

int main() {
  string word;
  cin >> word;

  string result;
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == '<') {
      result.erase(result.length() - 1);
    } else {
      result += word[i];
    }
  }

  cout << result << endl;
}

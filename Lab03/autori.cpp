#include <iostream>

using namespace std;

int main() {
  string givenWords, result;

  cin >> givenWords;
  for (int i = 0; i < givenWords.length(); i++) {
    if (i == 0)
      result += givenWords[i];

    if (givenWords[i] == '-')
      result += givenWords[i + 1];
  }
  cout << result << endl;
}

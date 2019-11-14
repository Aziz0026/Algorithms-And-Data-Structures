#include <iostream>
#include <string>

using namespace std;

int main() {
  string word;
  cin >> word;

  int days = 0;
  for (int i = 0; i <= word.length(); i++) {
    if (word[i] != 'P' && word[i] != 'E' && word[i] != 'R') {
      days++;
    }
  }

  cout << days << endl;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
  string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."; // lenght is 28
  int n;
  while ((cin >> n) && n != 0) {
    string result;
    string word;
    cin >> word;

    for (int i = word.length() - 1; i >= 0; i--) {
      int position = characters.find(word[i]);
      int newPosition = position + n;

      if (newPosition > 27) {
        newPosition = newPosition - 28;
      }
      result += characters[newPosition];
    }
    cout << result << endl;
  }
}

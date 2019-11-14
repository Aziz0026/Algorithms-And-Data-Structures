#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin >> ws;

  for (int i = 0; i < n; i++) {
    string sentence;
    getline(cin, sentence);
    if (sentence.substr(0, 10) == "Simon says") {
      cout << sentence.substr(11, sentence.length()) << endl;
    }
  }
}

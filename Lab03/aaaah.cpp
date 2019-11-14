#include <iostream>

using namespace std;

int main() {
  string able, required;

  cin >> able;
  cin >> required;

  // TODO: make shorter or use operator
  if (able.length() >= required.length()) {
    cout << "go" << endl;
  } else {
    cout << "no" << endl;
  }
}

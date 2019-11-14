#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool parseInt(const string &s, int &r);

int main(int argc, char *argv[]) {
  int sum = 0;
  for (int i = 1; i < argc; i++) {
    int number;
    if (parseInt(argv[i], number)) {
      sum += number;
    } else {
      cout << "incorrect integer: " << argv[i] << endl;
    }
  }
  cout << "sum: " << sum << endl;
}

bool parseInt(const string &s, int &r) {
  istringstream sinp(s);
  return sinp >> r && sinp.eof();
}

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool parseInt(const string &s, int &r);

int main(int argc, char *argv[]) {
  vector<string> res;
  int sum = 0;
  for (int i = 1; i < argc; i++) {
    int number;
    if (parseInt(argv[i], number)) {
      string s = to_string(number);
      set<char> ch(s.begin(), s.end());
      res.push_back(s);
    } else {
      cout << "incorrect integer: " << argv[i] << endl;
    }
  }
  cout << "res: " << res << endl;
}

bool parseInt(const string &s, int &r) {
  istringstream sinp(s);
  return sinp >> r && sinp.eof();
}

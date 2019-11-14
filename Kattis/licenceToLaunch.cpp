#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int minJunk = 0;
  int day = 0;
  for (int i = 0; i < n; i++) {
    int j = 0;
    cin >> j;

    if (i == 0)
      minJunk = j;

    if (minJunk > j) {
      minJunk = j;
      day = i;
    }
  }

  cout << day << endl;
}

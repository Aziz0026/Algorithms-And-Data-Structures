#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> given(n);

  vector<string> names(n);
  for (int i = 0; i < n; i++)
    cin >> names[i];

  given = names;

  sort(names.begin(), names.end());
  vector<string> increasing(n);
  increasing = names;

  sort(names.begin(), names.end(), greater<string>());
  vector<string> decreasing(n);
  decreasing = names;

  if (given == decreasing) {
    cout << "DECREASING" << endl;
  } else if (given == increasing) {
    cout << "INCREASING" << endl;
  } else {
    cout << "NEITHER" << endl;
  }
}

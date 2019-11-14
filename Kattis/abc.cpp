#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> numbers;
  int a, b, c;

  cin >> a >> b >> c;

  numbers.push_back(a);
  numbers.push_back(b);
  numbers.push_back(c);

  sort(numbers.begin(), numbers.end());

  string order;
  cin >> order;

  for (int i = 0; i < 3; i++) {
    switch (order[i]) {
    case 'A':
      cout << numbers[0] << " ";
      break;
    case 'B':
      cout << numbers[1] << " ";
      break;
    case 'C':
      cout << numbers[2] << " ";
      break;
    }
  }
  cout << endl;
}

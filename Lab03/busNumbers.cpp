// g++ -std=c++17 busNumbers.cpp

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> numbers;
  for (int i = 0; i < n; i++) {
    int x = 0;
    cin >> x;

    numbers.push_back(x);
    sort(numbers.begin(), numbers.end());
  }

  int index = 0;
  while (index < n) {
    int start = numbers[index];

    while (index + 1 < n && numbers[index] == numbers[index + 1] - 1)
      index++;

    int end = numbers[index];

    if (start == end)
      printf("%d%s", start, index == n - 1 ? "\n" : " ");
    else if (start == end - 1)
      printf("%d %d%s", start, end, index == n - 1 ? "\n" : " ");
    else
      printf("%d-%d%s", start, end, index == n - 1 ? "\n" : " ");
    index++;
  }
}

#include <iostream>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  int daysCounter = 0;
  for (int i = 0; i < n; i++) {
    int day;
    cin >> day;

    if (day <= d) {
      break;
    }

    daysCounter++;
  }

  if (daysCounter != n) {
    cout << "It hadn't snowed this early in " << daysCounter << " years!"
         << endl;
  } else {
    cout << "It had never snowed this early!" << endl;
  }
}

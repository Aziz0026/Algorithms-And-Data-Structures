#include <iostream>

using namespace std;

int main() {
  int gold, silver, copper;
  cin >> gold >> silver >> copper;
  int totalPoints = gold * 3 + silver * 2 + copper;

  if (totalPoints >= 8) {
    cout << "Province or ";
  } else if (totalPoints >= 5) {
    cout << "Duchy or ";
  } else if (totalPoints >= 2) {
    cout << "Estate or ";
  }

  if (totalPoints >= 6) {
    cout << "Gold" << endl;
  } else if (totalPoints >= 3) {
    cout << "Silver" << endl;
  } else {
    cout << "Copper" << endl;
  }
}

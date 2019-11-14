#include <iostream>

using namespace std;

int main()
{
    cout << "number of points: ";
    int p;
    cin >> p;

    if (p < 0 || p > 100) {
        cout << "incorrect data\n";
    } else if (80 <= p) {
        cout << "grade: A\n";
    } else if (p >= 60 ) {
        cout << "grade: B\n";
    } else if (p >= 40) {
        cout << "grade: C\n";
    } else if (p >= 20) {
        cout << "grade: D\n";
    } else {
        cout << "grade: F\n";
    }
}
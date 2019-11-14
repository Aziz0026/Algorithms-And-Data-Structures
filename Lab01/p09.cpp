#include <iostream>

using namespace std;

int main()
{
    cout << "integer number: ";
    int x;
    cin >> x;

    int r = x;
    if (r < 0) {
        r = -r;
    }

    cout << "|" << x << "| = " << r << "\n";
}
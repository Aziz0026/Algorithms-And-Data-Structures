#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    while (cin >> a >> b) {
        if (b == 0) {
            cout << "division by 0\n";
            continue;
        }

        cout << a << " / " << b << " = " << a / b << "\n";
        cout << a << " % " << b << " = " << a % b << "\n";
    }
}
#include <iostream>

using namespace std;

int main()
{
    cout << "size of bool: " << sizeof(bool) << "\n";
    cout << "false: " << false << "\n";
    cout << "true: " << true << "\n";

    cout << "&& (and) operator:\n";
    cout << false << " && " << false << " = " << (false && false) << "\n";
    cout << false << " && " << true << " = " << (false && true) << "\n";
    cout << true << " && " << false << " = " << (true && false) << "\n";
    cout << true << " && " << true << " = " << (true && true) << "\n";

    cout << "|| (or) operator:\n";
    cout << false << " || " << false << " = " << (false || false) << "\n";
    cout << false << " || " << true << " = " << (false || true) << "\n";
    cout << true << " || " << false << " = " << (true || false) << "\n";
    cout << true << " || " << true << " = " << (true || true) << "\n";

    cout << "! (not) operator:\n";
    cout << "!" << false << " = " << !false << "\n";
    cout << "!" << true << " = " << !true << "\n";

    cout << boolalpha;

    // any number except zero is true in boolean expressions
    cout << -5 << " && " << 3 << " = " << (-5 && 3) << "\n";

    // boolean values in arithmetic expressions: false = 0, true = 1
    cout << "Enter 3 integers: ";
    int x;
    cin >> x;
    int y;
    cin >> y;
    int z;
    cin >> z;

    int c = 0;
    c += x % 3 == 0;
    c += y % 3 == 0;
    c += z % 3 == 0;

    cout << "Number of divisible by 3: " << c << "\n";

    // short circuit evaluation of boolean expressions
    cout << x << " is divisor of " << y << ": " << (x != 0 && y % x == 0) << "\n";
    cout << "This triple has equal pairs: " << (x == y || x == z || y == z) << "\n";
}
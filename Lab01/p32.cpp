#include <iostream>

using namespace std;

void badSwap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void goodSwap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    cout << "x = ";
    int x;
    cin >> x;

    cout << "y = ";
    int y;
    cin >> y;

    cout << "before badSwap x = " << x << ", y = " << y << "\n";
    badSwap(x, y);
    cout << "after badSwap x = " << x << ", y = " << y << "\n";
    
    cout << "before goodSwap x = " << x << ", y = " << y << "\n";
    goodSwap(x, y);
    cout << "after goodSwap x = " << x << ", y = " << y << "\n";
}
#include <cmath>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "size of int: " << sizeof(int) << "\n";
    cout << "min int: " << numeric_limits<int>::min() << "\n";
    cout << "max int: " << numeric_limits<int>::max() << "\n";

    cout << "1st int: ";
    int a;
    cin >> a;

    cout << "2nd int: ";
    int b;
    cin >> b;

    int sum = a + b;
    int dif = a - b;
    int prd = a * b;
    int qtn = a / b;
    int rem = a % b;

    cout << a << " + " << b << " = " << sum << "\n";
    cout << a << " - " << b << " = " << dif << "\n";
    cout << a << " * " << b << " = " << prd << "\n";
    cout << a << " / " << b << " = " << qtn << "\n";
    cout << a << " % " << b << " = " << rem << "\n";

    cout << "distance between " << a << " and " << b << " is "
         << abs(a - b) << "\n";
}

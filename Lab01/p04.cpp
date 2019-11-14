#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "size of double: " << sizeof(double) << "\n";
    cout << "min double: " << numeric_limits<double>::min() << "\n";
    cout << "max double: " << numeric_limits<double>::max() << "\n";

    cout << "1st double: ";
    double a;
    cin >> a;

    cout << "2nd double: ";
    double b;
    cin >> b;

    cout << fixed << setprecision(3);
    cout << "in fixed format with precision 3:\n"
         << "a = " << a << "\n"
         << "b = " << b << "\n";

    cout << scientific << setprecision(5);
    cout << "in scientific format with precision 5:\n"
         << "a = " << a << "\n"
         << "b = " << b << "\n";

    cout << defaultfloat << setprecision(6);
    cout << "in default format with precision 6:\n"
         << "a = " << a << "\n"
         << "b = " << b << "\n";

    cout << a << " + " << b << " = " << a + b << "\n";
    cout << a << " - " << b << " = " << a - b << "\n";
    cout << a << " * " << b << " = " << a* b << "\n";
    cout << a << " / " << b << " = " << a / b << "\n";

    cout << "square roots of their abs. values are " << sqrt(abs(a)) << ", " << sqrt(abs(b)) << "\n";

    cout << "sum of their cubes is " << pow(a, 3) + pow(b, 3) << "\n";
}

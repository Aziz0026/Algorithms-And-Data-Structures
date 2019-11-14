#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    cout << "1st cathetus: ";
    double a;
    cin >> a;

    cout << "2nd cathetus: ";
    double b;
    cin >> b;

    double c = sqrt(a * a + b * b);

    cout << fixed << setprecision(4) << "hyphotenuse is " << c << "\n";
}
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
    cout << "a: ";
    int32_t a;
    cin >> a;

    cout << "b: ";
    int32_t b;
    cin >> b;

    if (a > b) {
        swap(a, b);
    }

    // long long s = 0
    int64_t s = 0;
    for (int i = a; i <= b; ++i) {
        s += i;
    }

    cout << "sum(" << a << ", " << b << ") = " << s << "\n";

    s = (int64_t(a) + b) * (b - a + 1) / 2;

    cout << "sum(" << a << ", " << b << ") = " << s << "\n";
}
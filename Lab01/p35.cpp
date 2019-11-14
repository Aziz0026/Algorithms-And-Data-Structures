#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

string convertToBase(int n, int b);

int main()
{
    int n;
    int b;
    while (cin >> n >> b)
    {
        try
        {
            string r = convertToBase(n, b);
            cout << n << " in base " << b << ": " << r << "\n";
        }
        catch (invalid_argument& e)
        {
            cerr << e.what() << "\n";
        }
    }
}

string convertToBase(int n, int b)
{
    static const string digits = "0123456789ABCDEF";

    if (b < 2 || 16 < b)
    {
        throw invalid_argument("convertToBase: incorrect base");
    }

    bool neg = false;
    if (n < 0)
    {
        n = -n;
        neg = true;
    }

    string r;
    while (n != 0)
    {
        r += digits[n % b];
        n /= b;
    }

    if (neg)
    {
        r += '-';
    }

    reverse(begin(r), end(r));

    return r;
}
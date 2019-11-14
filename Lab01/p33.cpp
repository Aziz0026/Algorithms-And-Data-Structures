#include <algorithm>
#include <ctime>
#include <iostream>
#include <stdexcept>

using namespace std;

int gcdSlow(int a, int b);
int gcdFast(int a, int b);

int main()
{
    int a;
    int b;
    while (cin >> a >> b)
    {
        try
        {
            clock_t beg1 = clock();
            int d1 = gcdSlow(a, b);
            clock_t end1 = clock();
            
            cout << "time: " << double(end1 - beg1) / CLOCKS_PER_SEC << "\n";
            cout << "gcdSlow(" << a << "," << b << ") = " << d1 << "\n"; 

            clock_t beg2 = clock();
            int d2 = gcdFast(a, b);
            clock_t end2 = clock();
            
            cout << "time: " << double(end2 - beg2) / CLOCKS_PER_SEC << "\n";
            cout << "gcdFast(" << a << "," << b << ") = " << d2 << "\n"; 

        }
        catch (invalid_argument& e)
        {
            cout << e.what() << endl;
        }
    }
}

int gcdSlow(int a, int b)
{
    if (a == 0 && b == 0)
    {
        throw invalid_argument("gcd(0, 0) is not defined");
    }

    a = abs(a);
    b = abs(b);
    
    if (a == 0 || b == 0)
    {
        return max(a, b);
    }
    
    int d = min(a, b);
    while (a % d != 0 || b % d != 0)
    {
        --d;
    }        

    return d;
}

int gcdFast(int a, int b)
{
    if (a == 0 && b == 0)
    {
        throw invalid_argument("gcd(0, 0) is not defined");
    }

    a = abs(a);
    b = abs(b);
    
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    
    return a;
}
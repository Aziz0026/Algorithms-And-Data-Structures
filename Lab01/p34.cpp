#include <algorithm>
#include <ctime>
#include <iostream>

using namespace std;

bool isPrimeSlow(int n);
bool isPrimeFast(int n);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    if (a > b)
    {
        swap(a, b);
    }

    clock_t beg1 = clock();

    int counter1 = 0;
    for (int i = a; i <= b; ++i)
    {
        if (isPrimeSlow(i))
        {
            ++counter1;
        }
    }
    
    clock_t end1 = clock();

    cout << "isPrimeSlow time: " << double(end1 - beg1) / CLOCKS_PER_SEC << "\n";
    cout << "number of primes: " << counter1 << "\n";

    clock_t beg2 = clock();

    int counter2 = 0;
    for (int i = a; i <= b; ++i)
    {
        if (isPrimeFast(i))
        {
            ++counter2;
        }
    }
    
    clock_t end2 = clock();

    cout << "isPrimeFast time: " << double(end2 - beg2) / CLOCKS_PER_SEC << "\n";
    cout << "number of primes: " << counter2 << "\n";
}

bool isPrimeSlow(int n)
{
    if (n == 1) return false;

    if (n == 2) return true;
    
    if (n % 2 == 0) return false;
    
    for (int i = 3; i < n / 2; i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

bool isPrimeFast(int n)
{
    if (n == 1) return false;

    if (n == 2) return true;

    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

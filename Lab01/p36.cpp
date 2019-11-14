#include <iostream>
#include <cctype>
#include <cstdint>
#include <stdexcept>
#include <string>

using namespace std;

uint64_t convertFromBase(const string& s, uint32_t b);

int main()
{
    string s;
    uint32_t b;
    while (cin >> s >> b)
    {
        try
        {
            uint64_t r = convertFromBase(s, b);
            cout << s << " in base 10: " << r << "\n";
        }
        catch (invalid_argument& e)
        {
            cerr << e.what() << "\n";
        }
    }
}

uint64_t convertFromBase(const string& s, uint32_t b)
{
    static const string digits = "0123456789ABCDEF";
    
    if (b < 2 || 16 < b)
    {
        throw invalid_argument("convertFromBase: incorrect base");
    }
    
    uint64_t r = 0;
    for (auto e : s)
    {
        size_t p = digits.find(e);
        if (p == string::npos || b <= p)
        {
            throw invalid_argument("convertFromBase: incorrect number");
        }
        r = b * r + p;
    }
    
    return r;
}

#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> counters('Z' - 'A' + 1, 0);

    for (char ch; cin.get(ch);)
    {
        if (isalpha(ch))
        {
            ch = toupper(ch);
            ++counters[ch - 'A'];
        }
    }

    char letter = 'A';
    for (int c : counters)
    {
        cout << letter << ": " << c << "\n";
        ++letter;
    }

    // C++ 98
    // vector<int>::iterator p = max_element(counters.begin(), counters.end());

    // C++ 11
    auto p = max_element(counters.begin(), counters.end());

    cout << "maximum counter: " << *p << "\n";

    int index = p - counters.begin();
    cout << "most common letter: " << char(index + 'A') << "\n";
}

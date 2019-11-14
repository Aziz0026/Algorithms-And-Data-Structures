#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string msg;
    getline(cin, msg);

    string buf;
    for (char c : msg) {
        if (isalpha(c)) {
            buf += tolower(c);
        }
    }

    string tmp = buf;
    reverse(tmp.begin(), tmp.end());

    cout << (tmp == buf ? "palindrome\n" : "not a palindrome\n");
}
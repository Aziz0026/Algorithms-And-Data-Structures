#include <cctype>
#include <iostream>

using namespace std;

int main()
{
    int nLetters = 0;
    int nUpperCase = 0;
    int nLowerCase = 0;
    int nDigits = 0;
    int nSpaces = 0;
    int nControl = 0;

    char ch;
    while (cin.get(ch)) {
        nLetters += isalpha(ch) ? 1: 0;
        nUpperCase += isupper(ch) ? 1: 0;
        nLowerCase += islower(ch) ? 1: 0;
        nDigits += isdigit(ch) ? 1: 0;
        nSpaces += isspace(ch) ? 1: 0;
        nControl += iscntrl(ch) ? 1: 0;
    }

    cout << "letters: " << nLetters << "\n"
         << "uppercase letters: " << nUpperCase << "\n"
         << "lowercase letters: " << nLowerCase << "\n"
         << "digits: " << nDigits << "\n"
         << "whitespaces: " << nSpaces << "\n"
         << "control symbols: " << nControl << "\n";
}
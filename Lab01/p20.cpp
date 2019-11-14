#include <iostream>
#include <limits>

using namespace std;

int main()
{
    char minChar = numeric_limits<char>::min();
    char maxChar = numeric_limits<char>::max();
    
    cout << "size of char: " << sizeof(char) << "\n";
    cout << "min value of char: " << int(minChar) << "\n";
    cout << "max value of char: " << int(maxChar) << "\n";
    
    cout << "digits (ASCII): " << "\n";
    cout << '0' << ": " << int('0') << "\n";
    cout << '1' << ": " << int('1') << "\n";
    cout << '2' << ": " << int('2') << "\n";
    cout << "..." << "\n";
    cout << '9' << ": " << int('9') << "\n";
    
    cout << "1st digit: ";
    char d1;
    cin >> d1;
    
    cout << "2st digit: ";
    char d2;
    cin >> d2;
    
    cout << d1 << " * " << d2 << " = " << (d1 - '0') * (d2 - '0') << "\n";
    
    cout << "Upper-case letters: " << "\n";
    cout << 'A' << ": " << int('A') << "\n";
    cout << 'B' << ": " << int('B') << "\n";
    cout << 'C' << ": " << int('C') << "\n";
    cout << "..." << "\n";
    cout << 'Z' << ": " << int('Z') << "\n";
    
    cout << "Lower-case letters: " << "\n";
    cout << 'a' << ": " << int('a') << "\n";
    cout << 'b' << ": " << int('b') << "\n";
    cout << 'c' << ": " << int('c') << "\n";
    cout << "..." << "\n";
    cout << 'z' << ": " << int('z') << "\n";
    
    cout << "upper-case letter: ";
    char uc;
    cin >> uc;
    cout << "lower-case letter: " << char(uc + ('a' - 'A')) << "\n";

    cout << "lower-case letter: ";
    char lc;
    cin >> lc;
    cout << "upper-case letter: " << char(lc - ('a' - 'A')) << "\n";    
}
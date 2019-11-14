#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    const int kRows = 10;
    const int kCols = 10;;
    cout << "Multiplication Table (" << kRows << "x" << kCols << ")\n";

    cout << "amount of numbers to print: ";
    int n;
    cin >> n;

    int nNumbers = 0;
    for (int r = 1; r <= kRows; ++r) {
        for (int c = 1; c <= kCols; ++c) {
            if (nNumbers == n) {
                goto breakFF;
            }
            cout << setw(4) << r * c;
            ++nNumbers;
        }
        cout << "\n";
    }

breakFF:
    cout << "\nIn total: " << nNumbers << " numbers.\n";
}
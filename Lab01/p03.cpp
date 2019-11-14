#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    cout << "seconds: ";
    int sec;
    cin >> sec;

    sec %= 24 * 3600;

    int hour = sec / 3600;
    sec %= 3600;

    int min = sec / 60;
    sec %= 60;

    cout << setfill('0')
         << setw(2) << hour << ":"
         << setw(2) << min << ":"
         << setw(2) << sec << "\n";
}

#include <iostream>

using namespace std;

int main()
{
    cout << "your age: ";
    int age;
    cin >> age;

    if (age < 24) {
        cout << ":-)" << "\n";
    } else {
        cout << ":-(" << "\n";
    }

    cout << (age < 24 ? ":-)" : ":-(") << "\n";

    return 0;
}
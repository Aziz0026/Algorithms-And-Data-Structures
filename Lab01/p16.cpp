#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double kCmPerInch = 2.54;

    for (;;) {
        cout << "1. inch -> cm\n";
        cout << "2. cm -> inch\n";
        cout << "any other number: exit\n";

        cout << "your choice: ";
        int choice;
        cin  >> choice;

        if (choice != 1 and choice != 2) break;

        double length = 0;

        switch (choice) {
        case 1:
            cout << "inches: ";
            cin >> length;
            cout << "cm: " << fixed << setprecision(2)
                 << kCmPerInch* length << "\n";
            break;
        case 2:
            cout << "cm: ";
            cin >> length;
            cout << "inches: " << fixed << setprecision(2)
                 << length / kCmPerInch << "\n";
            break;
        }
    }
}
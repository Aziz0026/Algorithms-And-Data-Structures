#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "name: ";
    string name;
    cin >> name;


    string border(name.size() + 4, '*');

    cout << border << "\n";
    cout << "* " + string(name.size(), ' ') + " *\n";
    cout << "* " + name + " *\n";
    cout << "* " + string(name.size(), ' ') + " *\n";
    cout << border << "\n";
}
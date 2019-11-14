#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
        {
            cout << line << "\n";
        }
        else
        {
            istringstream sinp(line);
            string name;
            sinp >> name;
            int sum = 0;
            int grade;
            while (sinp >> grade)
            {
                sum += grade;
            }
            cout << name << ": " << sum << "\n";
        }
    }
}

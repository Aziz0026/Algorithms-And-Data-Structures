#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nLines = 0;
    for (string line; getline(cin, line);) {
        ++nLines;
        int startPos = -1;
        for (int i = 0; i < int(line.size()); ++i) {
            if (line[i] == '"' && startPos == -1) {
                startPos = i;
            } else if (line[i] == '"' && startPos != -1) {
                cout << nLines << ": " << line.substr(startPos, i - startPos + 1) << "\n";
                startPos = -1;
            }
        }
    }
}
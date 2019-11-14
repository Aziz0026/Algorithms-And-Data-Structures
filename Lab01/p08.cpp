#include <iostream>

using namespace std;

int main()
{
    // 1st rectangle
    const int x1 = 100;
    const int y1 = 100;

    const int x2 = 300;
    const int y2 = 200;

    // 2nd rectangle
    const int x3 = 200;
    const int y3 = 150;

    const int x4 = 500;
    const int y4 = 300;

    cout << "x: ";
    int x;
    cin >> x;

    cout << "y: ";
    int y;
    cin >> y;

    bool inRect1 = x1 <= x && x <= x2 && y1 <= y && y <= y2;

    bool inRect2 = x3 <= x && x <= x4 && y3 <= y && y <= y4;

    bool inSomeRect = inRect1 or inRect2;

    bool outOfRects = !inSomeRect;

    int numOfRects = 0;

    numOfRects += inRect1;
    numOfRects += inRect2;

    cout << boolalpha;
    cout << "in first rect: " << inRect1 << "\n";
    cout << "in second rect: " << inRect2 << "\n";
    cout << "in some rect: " << inSomeRect << "\n";
    cout << "out of rects: " << outOfRects << "\n";
    cout << "number of rects: " << numOfRects << "\n";
}
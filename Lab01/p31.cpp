#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {5, 0, 1, 6, 0, 3, 3, 0, 10, 2};
    
    // C++ 17 <iterator>: begin(v) = v.begin(), end(v) = v.end(), size(v) = v.size()
    cout << "number of 0: " << count(begin(v), end(v), 0) << "\n";
    cout << "number of 0 in 1st half: " << count(begin(v), begin(v) + size(v) / 2, 0) << "\n";
    cout << "number of 0 in 2nd half: " << count(begin(v) + size(v) / 2, end(v), 0) << "\n";
    
    // C++ 03: vector<int>::iterator pMin = min_element(begin(v), end(v));
    auto pMin = min_element(begin(v), end(v));
    auto pMax = max_element(begin(v), end(v));
    
    cout << "min element: " << *pMin << "\n";
    cout << "max element: " << *pMax << "\n";
    
    cout << "distance between min and max: " << abs(pMin - pMax) << "\n";
    cout << "index of min: " << pMin - begin(v) << "\n";
    cout << "index of max: " << pMax - begin(v) << "\n";
    
    cout << "enter number to search: ";
    int k;
    cin >> k;
    
    auto pK = find(begin(v), end(v), k);
    if (pK != end(v))
    {
        cout << "number " << k << " found at position " << pK - begin(v) << "\n";
    }
    else
    {
        cout << "number " << k << " not found\n";
    }
    
    sort(begin(v), end(v));
    
    cout << "after sort:";
    for (auto e : v)
    {
        cout << " " << e;
    }
    cout << "\n";
    
    reverse(begin(v), end(v));
    
    cout << "after reverse:";
    for (auto e : v)
    {
        cout << " " << e;
    }
    cout << "\n";
}
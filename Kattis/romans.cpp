#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  double x;

  cin >> x;

  double result = (x * 1000 * 5280.0) / 4854.0;

  cout << fixed << setprecision(0) << result <<  '\n';
}

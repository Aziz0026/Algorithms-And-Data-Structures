#include <iostream>
#include <cstdlib>
#include <cstdint>

using namespace std;

int main(){
  int64_t x, y;

  while(cin >> x >> y){
    cout << abs(x - y) << "\n";
  }
}

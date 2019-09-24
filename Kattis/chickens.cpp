#include <iostream>
#include <string>

using namespace std;

int main(){
  int peoples, chickens;

  cin >> peoples;
  cin >> chickens;

  if (peoples < chickens){
   int result = chickens - peoples;

   string form = (result == 1) ? " piece" : " pieces";

   cout << "Dr. Chaz will have " << result <<  form << " of chicken left over!\n";

  }else if (chickens < peoples){
    int result = peoples - chickens;

    string form = (result == 1) ? " piece" : " pieces";

    cout << "Dr. Chaz needs " <<  result  << " more" <<  form <<  " of chicken!\n";
  }
}

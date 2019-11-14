#include <iostream>
#include <iterator>
#include <map>
#include <string>

using namespace std;

int main() {
  string sentence;
  getline(cin, sentence);

  map<char, string> translator{
      {'A', "@"},       {'B', "8"},      {'C', "("},      {'D', "|)"},
      {'E', "3"},       {'F', "#"},      {'G', "6"},      {'H', "[-]"},
      {'I', "|"},       {'J', "_|"},     {'K', "|<"},     {'L', "1"},
      {'M', "[]\\/[]"}, {'N', "[]\\[]"}, {'O', "0"},      {'P', "|D"},
      {'Q', "(,)"},     {'R', "|Z"},     {'S', "$"},      {'T', "']['"},
      {'U', "|_|"},     {'V', "\\/"},    {'W', "\\/\\/"}, {'X', "}{"},
      {'Y', "`/"},      {'Z', "2"}};

  for (char &c : sentence) {
    if ('a' <= c && c <= 'z') {
      cout << translator[c - 32].c_str();
    } else if ('A' <= c && c <= 'Z') {
      cout << translator[c].c_str();
    } else {
      cout << c;
    }
  }
  cout << endl;
}

// g++ -std=c++17 game1.cpp

#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <random>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> fillGuesses();
int getAnswer(const string& msg, int a, int b);
vector<string> filter(const vector<string>& g, int n, int m);
void countBullsCows(const string& g, const string& e, int& n, int& m);
bool parseInt(const string& s, int& r);

int main()
{
    vector<string> guesses = fillGuesses();
    
    mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count()); 
    shuffle(begin(guesses), end(guesses), rnd);

    for (;;)
    {
        cout << "My guess: " << guesses.front() << endl;

        int n = getAnswer("number of digits: ", 0, 4);
        int m = getAnswer("correct positions: ", 0, n);

        if (n == 4 && m == 4)
        {
            cout << "AI won." << endl;
            break;
        }

        guesses = filter(guesses, n, m);

        if (guesses.empty())
        {
            cout << "Cheating!!!" << endl;
            break;
        }
    }
}

vector<string> fillGuesses()
{
    vector<string> res;

    for (int i = 1023; i <= 9876; ++i)
    {
        string t = to_string(i);
        set<char> s(begin(t), end(t));
        if (size(s) == 4)
        {
            res.push_back(t);
        }
    }

    return res;
}

int getAnswer(const string& msg, int a, int b)
{
    for (;;)
    {
        cout << msg;
        string line;
        getline(cin, line);

        int r;
        if (parseInt(line, r) && a <= r && r <= b)
        {
            return r;
        }
        cout << "Incorrect input. Try again." << endl;
    }
}

vector<string> filter(const vector<string>& guesses, int n, int m)
{
    vector<string> res;

    string g = guesses.front();

    for (const auto& e : guesses)
    {
        int tn;
        int tm;
        countBullsCows(g, e, tn, tm);

        if (tn == n && tm == m)
        {
            res.push_back(e);
        }
    }

    return res;
}

void countBullsCows(const string& g, const string& e, int& n, int& m)
{
    n = 0;
    m = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (g[i] == e[j])
            {
                ++n;
                m += i == j;
            }
        }
    }
}

bool parseInt(const string& s, int& r)
{
    istringstream sinp(s);
    char c;
    return sinp >> r && !(sinp >> c);
}

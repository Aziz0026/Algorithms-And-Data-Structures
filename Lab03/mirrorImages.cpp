#include <iostream>
#include <vector>

using namespace std;

void mirroredVector(vector<vector<char>> m);

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> m;

    m.resize(r);
    for (int j = 0; j < m.size(); j++) {
      m[j].resize(c);
    }

    for (int k = 0; k < r; k++) {
      for (int j = 0; j < c; j++) {
        cin >> m[k][j];
      }
    }

    cout << "Test " << i + 1 << endl;
    mirroredVector(m);
  }
}

void mirroredVector(vector<vector<char>> m) {
  for (int k = m.size() - 1; k >= 0; k--) {
    for (int j = m[k].size() - 1; j >= 0; j--) {
      cout << m[k][j];
    }
    cout << endl;
  }
};

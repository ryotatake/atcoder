#include <bits/stdc++.h>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int y = y1- y2;
  int x = x2 - x1;
  cout << y + x2 << ' ' << x + y2 << ' ' << y + x1 << ' ' << x + y1 << endl;
  return 0;
}

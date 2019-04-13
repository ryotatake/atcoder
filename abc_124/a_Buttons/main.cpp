#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int x, y, z;
  x = a + b;
  y = a * 2 - 1;
  z = b * 2 - 1;
  cout << max({x, y, z}) << endl;
  return 0;
}

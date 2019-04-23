#include <bits/stdc++.h>

using namespace std;

int main() {
  long a, b;
  cin >> a >> b;
  long d = b - a;
  long h = ( 1 + d ) * d / 2;
  cout << h - b << endl;
  return 0;
}

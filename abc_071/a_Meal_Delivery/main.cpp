#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;
  int da, db;
  da = abs( a - x );
  db = abs( b - x );
  if( da > db )
    cout << 'B' << endl;
  else
    cout << 'A' << endl;
  return 0;
}

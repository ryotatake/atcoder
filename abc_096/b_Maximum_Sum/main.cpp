#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int _max = max({ a, b, c });
  int p = pow( 2, k );
  cout << a + b + c + _max * ( p - 1 ) << endl;

  return 0;
}

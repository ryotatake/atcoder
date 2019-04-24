#include <bits/stdc++.h>

using namespace std;

int main() {
  int x;
  cin >> x;
  int M = 1;
  if ( x <= 3 ) {
    cout << 1 << endl;
    return 0;
  }
  for ( int i = 2; i <= floor( sqrt(x) ); i++ ) {
    for ( int j = 2; j < x; j++ ) {
      int p = pow( i, j );
      if ( p <= x ) {
        M = max( M, p );
      }
      else break;
    }
  }
  cout << M << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  int n = min( a,  b );

  for( int i = n; i >= 1; i-- ) {
    if( a % i == 0 && b % i == 0 ) {
      --k;
      if( k == 0 ) {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int total = 0, max_sub = 0;

  for ( int i = 0; i < 5; i++ ) {
    int a;
    cin >> a;
    if( a % 10 == 0 ) {
      total += a;
    } else {
      for ( int j = 1; j < 10; j++ ) {
        if ( ( a + j ) % 10 == 0 ) {
          total += ( a + j );
          max_sub = max( max_sub, j );
        }
      }
    }
  }
  cout << total - max_sub << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  int min_c = 1001;

  for ( int i = 0; i < N; i++ ) {
    int c, t;
    cin >> c >> t;
    if ( T >= t )
      min_c = min( min_c, c );
  }
  if ( min_c < 1001 )
    cout << min_c << endl;
  else
    cout << "TLE" << endl;
  return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  if ( N % 111 == 0 )
    cout << N << endl;
  else {
    for ( int i = 0; i < 9; i++ ) {
      int sub = N - 111 * i;
      if ( sub > 0 && sub < 111 ) {
        cout << 111 * ( i + 1 ) << endl;
        break;
      }
    }
  }
  return 0;
}
